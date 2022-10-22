#include <iostream>

int main() {
   int a[10];
   int n;
   int min, i, ind;
   std::cout << "mutqagreq qani tiv mutq ani   ";
  std::cin >> n;

  for(i = 0; i < n; ++i) {
          std::cin >> a[i];
  }
   min = a[0];
for(i=0; i<n; i++) {
      if(a[i]<min) {
         min = a[i];
         ind = i;
      }
}
   std::cout<<min <<"    " << ind;
   return 0;
}
