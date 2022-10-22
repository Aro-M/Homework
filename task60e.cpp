#include <iostream>
#include <string>

int main()
{   
    int j;
    int i;
    char a;  
    char b=' ';
    int count = 0;
  std::string name = "cheeseburger" ;
  for(int i =0; i < name.size();++i)    
  {
        int n=0;
      for(int j  = i; j < name.size();++j){
          if(name[i] == name[j]){
            n++;
  }
          if(n> count ){
                    count = n ;
                    a=name[i];
                  
            }
  }
  }for(int i =0 ; i < name.size();++i){
 
 if(name[i] == a ){
     name.erase(i,1);
     i--;
  }
 
  }
      std::cout << a << count <<std::endl;
      std::cout << name << std::endl;
  }
