#include <stdio.h>

int main(){
    //carto1
    int carta = 1;
    char Estado = 'A';
    char Codigo[4] = "A01";
    char Cidade[20] = "goiá";
    float População = 250.84;
    float Area = 100.86;
    double PIB = 150.60;
    int NumerodePontosTuristicos = 24;
    float DensidadePopulacional =  250.84 / 100.86;
    float PIBperCapita = 150.60 / 250.84;
    unsigned int SuperPoder = 250.84 * 100.86 * 150.60 * 24;

    
    printf("Estado: %c\n", Estado);
    printf("Códiga: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %.2f\n", População);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n",PIB);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBperCapita);
    printf("Super Poder: %u\n", SuperPoder);

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

    if(População > População2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }

    if(Area > Área2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }

    if( PIB > PIB2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }

    if(NumerodePontosTuristicos > NúmerodePontosTurísticos2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }

    if( DensidadePopulacional > DensidadePopulacional2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }

    if( PIBperCapita > PIBperCapita2){
        printf("Vencedor: Carta 1\n");
    } else {
        printf("Vencedor: Carta 2\n");
    }
    
    return 0;
}