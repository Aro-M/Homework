#include <iostream>

int main(){
        int const size = 7;
	int a;
	int arr[size];
	std::cin >> a;
        int i=0;
        if(a > 9){	
       while(a!=0){
       arr[i] = a % 10;
       ++i;
       a/=10;
       }
       for(int j = i-1; j >= 0; --j){
	       std::cout << arr[j] <<  " " ;
       }
	}
	
	return 0;

}
