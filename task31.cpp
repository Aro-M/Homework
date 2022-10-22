#include  <iostream>

int main(){
char  name = 'a';
char  *cptr = &name;


std::cout <<(void*) name  <<  std::endl;
std::cout <<(char) *cptr   <<   std::endl;
std::cout <<(void*) &name << std::endl;
}   
