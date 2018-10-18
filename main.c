/*
 * This program allows the user to enter a string.
 * Then it will classify each character depending on its ASCII code.
 * It will classify whether it is a vowel or a consonant (both upper and lower case), digits, special characters and spaces.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 18th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>

int main() {
    // Here I declare my variables.
    char string[250];
    int i = 0;
    // Here I ask the user for the string.
    printf("Give me your string:\n");
    fgets(string, sizeof(string), stdin);

    // The loop will run until the entered string finishes.
    while (string[i] != '\n') {
        // These are ASCII codes for letters (upper and lower case).
        if ((string[i] > 64 && string[i] < 91) || (string[i] > 96 && string[i] < 123)) {
            // ASCII codes for vowels.
            if (string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 ||
            string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117) {
                printf("%c is a vowel.\n", string[i]);
                // All the others are consonants.
            } else {
                printf("%c is a consonant.\n", string[i]);
            }
            // ASCII for numbers.
        } else if ((string[i] > 47 && string[i] < 58)) {
            printf("%c is a digit.\n", string[i]);
            // ASCII for spaces.
        } else if (string[i] == 32) {
            printf("Space entered.\n", string[i]);
            // Everything else will be classified as a special character.
        } else {
            printf("%c is a special character.\n", string[i]);
        }
        i++;
    }
    return 0;
}