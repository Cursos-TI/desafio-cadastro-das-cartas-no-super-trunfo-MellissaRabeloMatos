#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado[20]
    int codigo;
    char NomedaCidade[20];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Digite o Estado:\n");
    scanf("%s", &Estado);
    
    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &NomedaCidade);

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f",&area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos);

    printnf("Nome do Estado: %s - Codigo: %d\n", Estado, codigo);
    printf("Nome da Cidade: %s - População: %d\n", NomedaCidade, populacao);
    printf("Área: %f - PIB: %f - PontosTuristicos: %d\n", area, PIB, pontos turísticos);   
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
