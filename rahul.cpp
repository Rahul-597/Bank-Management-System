#include <iostream>
#include <cmath>

int main() {
    int n;
    cin >> n;
    int length = (n == 0) ? 1 : log10(n) + 1;
    std::cout << "Number of digits: " << length << std::endl;
    std::cout << length / 2;
    bool x = n%2 ==0 ?
    return 0;
}
