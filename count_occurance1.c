/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

void count_characters(const char *input_string) {
    int char_count[256] = {0};

    for (size_t i = 0; i < strlen(input_string); i++) {
        char current_char = input_string[i];
        char_count[(int)current_char]++;
    }

    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 0) {
            printf("Character '%c' occurs %d times.\n", (char)i, char_count[i]);
        }
    }
}

int main() {
    char input_string[100];

    printf("Enter a string: ");
    scanf("%99s", input_string);

    count_characters(input_string);

    return 0;
}

