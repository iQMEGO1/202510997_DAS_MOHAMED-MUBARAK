#include <iostream>
using namespace std;

float addFour(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    cout << "Sum: " << addFour(1.2, 3.4, 5.6, 7.8) << endl;
    return 0;
}