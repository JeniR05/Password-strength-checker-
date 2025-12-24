#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%s", password);

    length = strlen(password);

    for(int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (length < 6) {
        printf("Password Strength: Weak\n");
    }
    else if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Password Strength: Strong\n");
    }
    else if (hasLower && hasDigit) {
        printf("Password Strength: Medium\n");
    }
    else {
        printf("Password Strength: Weak\n");
    }

    return 0;
}