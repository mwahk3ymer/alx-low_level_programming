#include <stdio.h>

void print_alphabet(void)
{
    char c = 'a';
    char alphabet[26];

    for (int i = 0; i < 26; i++) {
        alphabet[i] = c;
        c++;
    }

    fwrite(alphabet, sizeof(char), 26, stdout);
    putchar('\n');
}
