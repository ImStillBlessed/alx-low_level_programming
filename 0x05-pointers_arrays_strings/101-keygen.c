#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
#define NUM_PASSWORDS 10

char generateRandomChar() {
    return (char)(rand() % 94 + 33);
}

void generatePassword(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';
}

char** generatePasswords() {
    srand(time(NULL));
 		char** passwords = (char**)malloc(NUM_PASSWORDS * sizeof(char*));
    for (int i = 0; i < NUM_PASSWORDS; i++) {
        passwords[i] = (char*)malloc((PASSWORD_LENGTH + 1) * sizeof(char));
        generatePassword(passwords[i]);
    }

    return passwords;
} 
