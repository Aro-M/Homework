#include  <iostream>

int main(){
        
        int x;
        std::cin >> x;
        int sum = 1;
        while(x!=1){
                
                sum =sum *(x%10);
                x=x/10;
        }       
        std::cout << sum <<std::endl;
        
return 0;
}
