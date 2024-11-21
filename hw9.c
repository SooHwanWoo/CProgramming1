#include <stdio.h>

int convCase(int ch) {
    const int diff = 'a' - 'A';  
    if (ch >= 'A' && ch <= 'Z')  
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) {
    char str[100];
    int i = 0;

    printf("Input> ");

    while ((str[i] = getchar()) != '\n' && str[i] != EOF) {
        i++;
    }
    str[i] = '\0';

    printf("Output> ");
    for (int j = 0; str[j] != '\0'; j++) {
        str[j] = convCase(str[j]);
    }

    printf("%s\n", str);
    return 0;
}
