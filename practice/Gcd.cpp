// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     while(b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int x = 12, y = 18;
//     cout << "GCD: " << gcd(x, y);
//     return 0;
// }

// Recursive

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int x = 12, y = 18;
    cout << "GCD: " << gcd(x, y);
    return 0;
}
