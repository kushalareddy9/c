#include <stdio.h>
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];  
    }
    return (float)sum / n; 
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];  

    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    float average = calculateAverage(marks, n);

    printf("The average marks are: %.2f\n", average);

    return 0;
}

