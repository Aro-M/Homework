#include  <iostream>

int main(){
        char cm ='*';
        int a;
	int i;
	int j;
        std::cin >> a;
        for( i = 1; i <=a ; i++){     
	     
		for ( j = 1; j <= i; j++) {
 
			std::cout << cm;
                        }

		std::cout << std::endl;

    	}

	return 0;
}
 
