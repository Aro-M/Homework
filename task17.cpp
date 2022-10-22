#include <iostream>
int main() {
    int n, f1 = 0, f2 = 1, res = 0,res1;

    std::cout << "mutqagreq tiv ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
    
        res = f1 + f2;
        f1 = f2;
        f2 = res;
        res1=res;
    }
        std::cout << res1;
    
    return 0;
}
