#include<stdio.h>
#include <math.h>

int swapFirstAndLast(int num) {
    if (num < 10 && num > -10) {
        return num;
    }

    int originalNum = num;
    int firstDigit, lastDigit, digits = 0;

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
        digits++;
    }
    firstDigit = num;

    int swappedNum = lastDigit * pow(10, digits);
    swappedNum += originalNum % (int)pow(10, digits);
    swappedNum -= lastDigit; 
    swappedNum += firstDigit;

    return swappedNum;
}
int main()
{
int number;
printf("Enter a number:");
scanf("%d",&number);

int result = swapFirstAndLast(number);
printf("number after swapping first and last digits:%d\n", result);
}
