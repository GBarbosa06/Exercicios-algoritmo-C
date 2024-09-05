#include <stdio.h>

int main()
{
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    float total = sp + rj + mg + es + outros;

    printf("Porcentagem da unidade de São Paulo: %.2f porcento \n", (sp/total) *100);
    printf("Porcentagem da unidade do Rio de Janeiro: %.2f porcento \n", (sp/total) *100);
    printf("Porcentagem da unidade de Minas Gerais: %.2f porcento \n", (sp/total) *100);
    printf("Porcentagem da unidade do Espirito Santo: %.2f porcento \n", (sp/total) *100);
    printf("Porcentagem das unidades restantes: %.2f porcento \n", (sp/total) *100);
}