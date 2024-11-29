#include <stdio.h>
using namespace std;

void addNumbers(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    addNumbers(num1, num2);  // Function call with arguments
    return 0;
}



