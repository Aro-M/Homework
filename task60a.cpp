#include <iostream>
#include  <string>
int main()
{
	std::string name = "cheeseburger";
      char mec = name[0] > name[1] ? name[0] : name[1];
 for (int i =2;i < name.size();++i){
         mec = mec > name[i] ?  mec : name[i];
	
 }
  std::cout <<"mecn e " <<  mec << std::endl;         
   
   char   poqr =   name[0]  <  name[1] ?  name[0] : name[1];

    for( int i = 0; i <  name.size();++i){
	    poqr = poqr < name[i] ?  poqr : name[i];


    }
    std::cout <<"poqrn e " <<  poqr << std::endl;
       std::cout << "hakarakn e " ;
   for( int i = name.size()-1; i > 0; --i){


   
	   std::cout  <<  name[i];
   }
   std::string name1 ;
   std::cout <<std::endl;
   std::cout << " gri inch vor  bar kam barer ";
   std::getline(std::cin, name1);
   name += name1;
   std::cout  << name << std::endl;   
   return 0;
}
