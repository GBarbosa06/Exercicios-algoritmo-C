#include <stdio.h>

#define IS_VOGAL(c) ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (IS_VOGAL(letra)) {
        printf("%c eh uma vogal.\n", letra);
    } else {
        printf("%c nao eh uma vogal.\n", letra);
    }
}