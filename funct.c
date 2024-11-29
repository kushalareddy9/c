#include <stdio.h>
using namespace std;

// Function to add two numbers without argument and without return type
void addNumbers() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

int main() {
    addNumbers();  // Function call
    return 0;
}


