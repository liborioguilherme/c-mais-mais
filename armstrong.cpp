#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int digits = (int) log10(num) + 1;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return originalNum == sum;
}

int main() {
    int num;
    cout << "Digite um n�mero: ";
    cin >> num;
    if (isArmstrong(num)) {
        cout << "O n�mero � um n�mero de Armstrong." << endl;
    } else {
        cout << "O n�mero n�o � um n�mero de Armstrong." << endl;
    }
    return 0;
}
