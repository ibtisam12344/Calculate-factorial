#include <iostream>
using namespace std;
double factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    cout << "Enter any number"<<endl;
    cin >> number;
cout << "Factorial of " << number << " is: " << factorial(number) << std::endl;

    return 0;
}
