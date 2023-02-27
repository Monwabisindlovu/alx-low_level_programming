#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char* generate_password();

int main() {
char* password = generate_password();
printf("Generated password: %s\n", password);
free(password);
return 0;
}

char* generate_password() {
char* charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
int charset_length = strlen(charset);
char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
srand(time(NULL));
for (int i = 0; i < PASSWORD_LENGTH; i++) {
int random_index = rand() % charset_length;
password[i] = charset[random_index];
}
password[PASSWORD_LENGTH] = '\0';
return password;
}
