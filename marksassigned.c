#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("You scored 5 points for entering a vowel.\n");
    } else if (isdigit(ch)) {
        printf("You scored 10 points for entering a number.\n");
    } else {
        printf("You scored 0 points for entering a non-vowel character.\n");
    }

    return 0;
}

