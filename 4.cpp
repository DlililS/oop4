#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double a = 4.8;
    double b = -7.9;
    double n;
    if (a >= b) { n = pow(a - b, (0.33)); }
    else if (a < b) n = (pow(a, 2) + ((a - b) / (std::sin(a * b))));
    if (n < b) {
        cout << ((n + a) / (-b) + sqrt(pow(std::sin(a), 2) - cos(n)));
    }
    else if (n == b)
        cout << (tan(n * a) + pow(b, 2));
    else if (n > b)
        cout << (pow(b, 3) + n * pow(a, 2));
}