#include <iostream>

// Հաշվեկշիռը նկարագրող ստրուկտուրա
struct Balance {
	long long all_money = 5000000; // Հաշվեկշռի մեջ գտնվող գումարը, որը սկզբնական ցանկացած օբյեկտի համար կազմում է 5000000 
	int month_incomes;// Այն գումարը, որը ամսեկան մտնումէ հաշվեկշռի մեջ
	int month_outcomes;// Այն գումարը, որը ամսեկան դուրս է գալիս հաշվեկշռի վրայից
	// Այն լոգիկան է որը կատարվում է այս դեպքում 
    /*
    Balance a;
    Balance b;
    a = b;
    */
    void operator=(const Balance& value)
	{
        // Վերը նշված կոդի համար այս իրականցումը կհամապատասխանի այս կոդի հետ
		this->month_incomes = value.month_incomes; // a.month_incomes = b.month_incomes;
		this->month_outcomes = value.month_outcomes; // a.month_outcomes = b.month_outcomes;
	} 
};

// Հարկերի տեսկներին համապատասխանող տոկոսադրույքը, որը իրականացված է enum-ի միջոցով
enum Payment {KP = 5,HP,VP,EP,SP};

// Աշխատակից նկարագրող ստրուկտուրա
struct Employee {
	std::string name; // Աշխատակցի անունը 
	int month_sallary;// Աշխատակցի ամսավճարը որը կարող է տատանվել նշված միջակայքում [45000;200000] 
	int month_payment{}; // Աշխատկցի կողմից վճարվող հարկերի անդհանուր չափսը գումարի տեսքով
	// Այն լոգիկան է որը կատարվում է այս դեպքում 
    /*
    Employee a;
    Employee b;
    a = b;
    */
    void operator=(const Employee& value) 
	{
        // Վերը նշված կոդի համար այս իրականցումը կհամապատասխանի այս կոդի հետ
		this->name = value.name; //a.name = b.name
		this->month_sallary = value.month_sallary; // a.month_sallary = b.month_sallary
		this->month_payment = value.month_payment; // a.month_payment = b.month_payment
	}
};

// Աշխատատեղի նկարագրող ստրուկտուրա
struct Office {
	int worker_count{}; // Աշխատավայրում բոլոր աշխատողների քանակը, որը կարող է տատանվել այս միջակայքում [10,100]
	Employee* workers;  //  Քանի որ մենք հստակ քանակ չունենք ստեղծում էնք միջիջոց որով կատարման ժամանակ նշված  
                        //  քանակության միջոցով կստեղծենք այն զնգվածը որի միջոցով կպահենք բոլոր աշխատակիցների
                        //  մասին տվյալները
	Balance office_balance; // Աշխատավայրի համար նախատեսված հաշվեկշիռը որի միջոցով աշխատակիցները կարողանում են
                            // ամսավճար ստանան և որին փոխանցվում է նրանց հարկերը
	Payment p_office[3];    // Աշխատավայրի կողմից վճարվող հարկերի տեսակները իրենց տոկոսադրույքի տեսքով
};

Employee create_employee(); // Ֆունկցիա որի միջոցով արժեքավորում էնք աշխատակցի տվյալներից անունը և ամսավճարը 
                            //և վերադարձնում ստացվածը
int get_employee_payment(int salary, Payment* payments);    // ֆունկցիա որի միջոցով ստանում էնք մեկ աշխատակցի կողմից
                                                            // վճարվող հարկերի ընդհանուր գումարային չափսը 
                                                            // և վերադարձնում ստացված գումարը
Office create_office(); // Ֆունկցիա որի միջոցով արժեքավորում էնք աշխատավայրին վերաբերվող բոլոր տվյալները
                        // և վերադարձնում ստացված օբյեկտը  
int get_month_outcome (Employee* workers, int workers_count);   // Հաշվեկշռի մեջից դուրս եկող ամսեկան գումարի չափսը
                                                                // ստացող ֆունկցիա որը ստանում էնք բոլոր աշխատակիցների 
                                                                // ստացած աշխատավարձերի գումարային արդյունքից
int get_month_income (Employee* workers, int count);    // Հաշվեկշռի մեջ մտնող գումարի չափսը
                                                        // ստացող ֆունկցիա որը ստանում էնք բոլոր աշխատակիցների 
                                                        // վճարած հարկերի գումարային արդյունքից
Balance resolve_balance(Employee* workers, int count);// Ֆունկցիա որի միջոցով արժեքավորում էնք հաշվեկշռին 
                                                    //վերաբերվող բոլոր տվյալները և վերադարձնում ստացված օբյեկտը

Employee create_employee()
{
	Employee result;
	std::cout << "Type the worker name : ";
	std::cin >> result.name;
	result.month_sallary = 45000 +  (rand() * 1000) % (200000 - 45000);  
	return result;
}


int get_employee_payment(int salary, Payment* payments)
{
	int percent{};
	for(int i = 0;i < 3;i++)
	{
		percent += payments[i];
	}
	return salary * percent / 100;
}


Office create_office()
{
	Office new_office;
	new_office.worker_count = 10 + rand() % 11;
	new_office.workers = new Employee[new_office.worker_count];
	for(int i = 0;i < 3;i++)
	{
		new_office.p_office[i] = (Payment) (5 + rand() % 5);
	}
	for(int i = 0;i < new_office.worker_count;i++)
	{
		new_office.workers[i] = create_employee();
		new_office.workers[i].month_payment = get_employee_payment(new_office.workers[i].month_sallary, new_office.p_office);
	}

	new_office.office_balance = resolve_balance(new_office.workers, new_office.worker_count); // Balance = Balance
	// resolve_balnce (Emloyee*, int);
       //delete [] new_office.workers;
      // new_office.workers = nullptr;
    return new_office;
}

int get_month_outcome (Employee* workers, int workers_count){
	int outcome = 0;
	for (int i = 0; i < workers_count; i++){
		outcome += workers[i].month_sallary;
	}
	return outcome;
}

int get_month_income (Employee* workers, int count){
	int income = 0;
	for (int i = 0; i < count; i++){
		income += workers[i].month_payment;
	}
	return income;
}

Balance resolve_balance(Employee* workers, int count){
	Balance obj;
	obj.month_incomes = get_month_income(workers, count);
	obj.month_outcomes = get_month_outcome(workers, count);
	return obj;
}
int get_six_months(Office obj){
	int sum = obj.office_balance.all_money;
   int i =0;
   while(i < 6){
	   sum +=obj.office_balance.month_incomes; 
           sum -=obj.office_balance.month_outcomes;
	   ++i;
   }
return sum;
 
 
}

int main(){
	srand(time(0));
    Office office1;
         office1 = create_office();
	 std::cout << " This is  a  number " ;
	 std::cout << get_six_months(office1);
	delete [] office1.workers;
	office1.workers = nullptr;
}

 

