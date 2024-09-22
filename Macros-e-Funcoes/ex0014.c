#include <stdio.h>

#define IS_VOGAL(c) ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (IS_VOGAL(letra)) {
        printf("%c eh uma vogal.\n", letra);
    } else {
        printf("%c nao eh uma vogal.\n", letra);
    }

    return 0;
}