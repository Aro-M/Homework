#include <iostream>

int  main(){

double value = 5;
double *ptr = &value;

std::cout << value  <<  std::endl;
std::cout << *ptr   <<   std::endl;
std::cout << &value << std::endl;


}
