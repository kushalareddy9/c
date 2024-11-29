#include <stdio.h>
using namespace std;

// Function to add two numbers with arguments and with return type
int addNumbers(int a, int b) {
    return a + b;  // Returning the sum
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int result = addNumbers(num1, num2);  // Function call with arguments
    cout << "Sum: " << result << endl;
    return 0;
}
