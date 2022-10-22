#include  <iostream>

int main(){

	int x;
	std::cin >> x;
	int sum = 0;
	while(x!=0){

		sum =sum + x%10;
		x=x/10;
	}
	std::cout << sum <<std::endl;

return 0;
}
