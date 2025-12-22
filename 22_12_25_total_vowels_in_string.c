#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int string_length = strlen(str) - 1;
    printf("Entered string length = %d\n", string_length);

    int vowels_count = 0, spaces_count = 0, consonants_count = 0;

    for (int i = 0; i < string_length; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels_count++;
        } else if (str[i] == ' ') {
            spaces_count++;
        } else {
            consonants_count++;
        }
    }

    printf("Total Vowels = %d\n", vowels_count);
    printf("Total Spaces = %d\n", spaces_count);
    printf("Total Consonants = %d\n", consonants_count);
    return 0;
}
