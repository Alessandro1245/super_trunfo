#include <stdio.h>

int main(){
    //carta1
    int carta1 = 1;
    char Estado1 = 'A';
    char Código1[4] = "A01";
    char Cidade1[20] = "goiá";
    double População1 = 250.84;
    float Área1 = 100.86;
    double PIB1 = 150.60;
    int NúmerodePontosTurísticos1 = 24;
    float DensidadePopulacional1 =  250.84 / 100.86;
    float PIBperCapita1 = 150.60 / 250.84;
    unsigned int SuperPoder1 = 250.84 * 100.86 * 150.60 * 24;

    printf("carta: %d\n", carta1);
    printf("Estado: %c\n", Estado1);
    printf("Códiga: %s\n", Código1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %.2f\n", População1);
    printf("Área: %.2f\n", Área1);
    printf("PIB: %.2f\n",PIB1);
    printf("Número de Pontos Turísticos: %d\n", NúmerodePontosTurísticos1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %u\n", SuperPoder1);

    //carta2
    int carta2 = 2;
    char Estado2 = 'B';
    char Código2[4] = "B02";
    char Cidade2[20] = "São Paulo";
    double População2 = 11451.999;
    float Área2 = 1521.11;
    double PIB2 = 271.00;
    int NúmerodePontosTurísticos2 = 36;
    float DensidadePopulacional2 =  11451.99 / 1521.11;
    float PIBperCapita2 = 271.00 / 11451.99;
    unsigned int SuperPoder2 = 11451.99 * 1521.11 * 271.00 * 36;

    printf("carta2: %d\n", carta2);
    printf("Estado2: %c\n", Estado2);
    printf("Códiga2: %s\n", Código2);
    printf("Cidade2: %s\n", Cidade2);
    printf("População2: %.2f\n", População2);
    printf("Área2: %.2f\n", Área2);
    printf("PIB2: %.2f\n",PIB2);
    printf("Número de Pontos Turísticos2: %d\n", NúmerodePontosTurísticos2);
    printf("Densidade Populacional2: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita2: %.2f\n", PIBperCapita2);
    printf("Super Poder2: %u\n", SuperPoder2);

    return 0;
}