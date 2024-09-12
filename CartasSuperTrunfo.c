#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Países\n");

    char pais = "Brasil";
    char estado;
    int cidade, pontosTuristicos;
    float populacao, area, pib, densidade, pibPerCapta;

    //Insere dados

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado);

    printf("Digite a cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Digite a população: ");
    scanf("%f", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;
    pibPerCapta = pib / populacao;
    
    //Imprime dados

    printf("Código da Carta: %s0%d\n", estado, cidade);
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %d\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB per Capita: %f\n", pibPerCapta);

    return 0;
}
