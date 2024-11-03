#include <stdio.h>
#include <ctype.h>

char changeCase(char c) {
    if (islower(c)) {
        return toupper(c);
    }
    else if (isupper(c)) {
        return tolower(c);
    }
    return c; // Return the character unchanged if not an alphabet
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf_s(" %c", &c);
    printf("Changed case: %c\n", changeCase(c));
    return 0;
}
