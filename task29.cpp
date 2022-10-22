#include <iostream>

int main() {
   int a[10];
   int n;
   int big, i, ind;
   std::cout << "mutqagreq qani tiv mutq ani   ";
  std::cin >> n;
 
  for(i = 0; i < n; ++i) {
          std::cin >> a[i];
  }
   big = a[0];
for(i=1; i<5; i++) { 
      if(a[i]>big) {
         big = a[i];
         ind = i;
      }
}   
   std::cout<<big<<"    " << ind;
   return 0;
}
