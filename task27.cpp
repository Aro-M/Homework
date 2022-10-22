#include <iostream>

int main() {

  int i, n;
  int arr[100];

  std::cout << "mutqagreq 1-100 hat tver ";
  std::cin >> n;
  std::cout <<std::endl;

  
  for(i = 0; i < n; ++i) {
	  std::cin >> arr[i];
  }

  for(i = 1;i < n; ++i) {

    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  std::cout<<std::endl << arr[0];

  return 0;
}
