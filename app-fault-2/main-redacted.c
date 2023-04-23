/* 
    C program to count vowels and consonants in a string using pointer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ev, ec, av, ac;

// count vowels and consonants in a string
void count_vowels_and_consonants(char *str)
{
    char *ptr = str;
    av = ac = 0;
    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'E' || ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            av++;
        else
            ac++;
        ptr++;
    }
}

void expected_count_vowels_and_consonants(char *str)
{
    char *ptr = str;
    ev = ec = 0;
    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            ev++;
        else
            ec++;
        ptr++;
    }
}

int main()
{
    char str[100];

    while (true) {
        printf("Enter a string: ");
        fflush(stdout);
        fgets(str, 99, stdin);
        count_vowels_and_consonants(str);
        expected_count_vowels_and_consonants(str);
        printf("%d %d %d %d\n", av, ev, ac, ec);
        if (av != ev || ac != ec) {
            break;
        }
        printf("The function works correctly with given string. Try again.\n");
        fflush(stdout);
    }

    printf("Congrats! You found a bug.\n");
    fflush(stdout);

    printf("Here is the flag: queraCTF{...}\n");
    fflush(stdout);

    return 0;
}
