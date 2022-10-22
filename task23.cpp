#include  <iostream>

int main(){
        char cm ='*';
        int a,i,j;
        std::cin >> a;

	for( i = 1; i <= a ;i++){

                for( j = 1; j < a;j++){

			if(i == 1 || i == a || j == 1 || j == a ){
		
				std::cout << cm;}
			else{
				std::cout << " ";
			}
		}
                 std::cout << cm << std::endl;
               

        }
        return 0;

}

