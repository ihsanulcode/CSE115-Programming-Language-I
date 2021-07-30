#include <stdio.h>
int main() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);
    char *p = &line;

    for (int i = 0; *(p+i) != '\0'; ++i) {
        if (*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' ||
            *(p+i) == 'o' || *(p+i) == 'u' || *(p+i) == 'A' ||
            *(p+i) == 'E' || *(p+i) == 'I' || *(p+i) == 'O' ||
            *(p+i) == 'U') {
            ++vowels;
        } else if ((*(p+i) >= 'a' && *(p+i) <= 'z') || (*(p+i) >= 'A' && *(p+i) <= 'Z')) {
            ++consonant;
        } else if (*(p+i) >= '0' && *(p+i) <= '9') {
            ++digit;
        } else if (*(p+i) == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nSpaces: %d", space);
    return 0;
}

