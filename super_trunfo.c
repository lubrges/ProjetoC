#include <stdio.h>

int main() {

    // Identação de variáveis 1
    
    int Populacao1, Pontos_Turisticos1;
    float Area_em_km21, PIB1;
    char Estado1[50], Carta1[50], Cidade1[50];

    // Inserção de dados de propriedade 1

    printf ("Carta 1 \n");
    printf ("Digite o Estado de sua Carta: \n");
    scanf (" %s", &Estado1);

    printf ("Digite o Código de sua Carta: \n");
    scanf (" %s", &Carta1);

    printf ("Digite o Nome de sua Cidade de sua Carta: \n");
    scanf (" %[^\n]", Cidade1);

    printf ("Digite a População de sua Carta: \n");
    scanf (" %d", Populacao1);

    printf ("Digite a Área em km² de sua Carta: \n");
    scanf (" %f", &Area_em_km21);

    printf ("Digite o Número PIB de sua Carta: \n");
    scanf (" %f", &PIB1);

    printf ("Digite o Número de Pontos Turisticos de sua Carta: \n");
    scanf (" %d", &Pontos_Turisticos1);

    // Identação de variáveis 2

    int Populacao2, Pontos_Turisticos2;
    float Area_em_km22, PIB2;
    char Estado2[50], Carta2[50], Cidade2[50];

    // Inserção de dados de propriedade 2

    printf ("Carta 2 \n");
    printf ("Digite o Estado de sua Carta: \n");
    scanf (" %s", &Estado2); 

    printf ("Digite o Código de sua Carta: \n");
    scanf (" %s", &Carta2);

    printf ("Digite o Nome da Cidade de sua Carta: \n");
    scanf (" %[^\n]", Cidade2);

    printf ("Digite a População de sua Carta: \n");
    scanf (" %d", &Populacao2);

    printf ("Digite a Área em km² de sua Carta: \n");
    scanf (" %f", &Area_em_km22);

    printf ("Digite o Número PIB de sua Carta: \n");
    scanf (" %f", &PIB2);

    printf ("Digite o Número de Pontos Turisticos de sua Carta: \n");
    scanf (" %d", &Pontos_Turisticos2);

    // Exibição de dados da carta 1

    printf (" Carta 1 \n");
    printf ("Estado: %s\n", Estado1);
    printf ("Código da Carta: %s\n", Carta1);
    printf ("Nome da Cidade: %s\n", Cidade1);
    printf ("População: %d\n", Populacao1);
    printf ("Área_em_km²: %f\n", Area_em_km21);
    printf ("PIB: %f\n", PIB1);
    printf ("Número de Pontos_Turisticos: %d\n", Pontos_Turisticos1);

    // Exibição de dados da carta 2

    printf (" Carta 2 \n");
    printf ("Estado: %s\n", Estado2);
    printf ("Código da Carta: %s\n", Carta2);
    printf ("Nome da Cidade: %s\n", Cidade2);
    printf ("População: %d\n", Populacao2);
    printf ("Área_em_km²: %f\n", Area_em_km22);
    printf ("PIB: %f\n", PIB2);
    printf ("Número de Pontos_Turisticos: %d\n", Pontos_Turisticos2);


    return 0;

}