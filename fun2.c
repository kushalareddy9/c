#include <stdio.h>
using namespace std;

// Function to add two numbers without argument and with return type
int addNumbers() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;  // Returning the sum
}

int main() {
    int result = addNumbers();  // Function call and storing return value
    cout << "Sum: " << result << endl;
    return 0;
}
