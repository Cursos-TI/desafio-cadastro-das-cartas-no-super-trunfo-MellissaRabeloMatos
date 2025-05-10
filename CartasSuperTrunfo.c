#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
   
    char Estado[20];
    char Cidade[20];
    int codigo, populacao , pontosturisticos;
    float PIB, area;

    printf("Digite o Estado:\n");
    scanf("%s", &Estado);

    printf("Digite a Cidade:\n");
    scanf("%s", &Cidade);

    printf("Digite o Codigo da Cidade:\n");
    scanf("%d", &codigo);

    printf("Digite a População:\n");
    scanf("%d",&populacao);

    printf("Digite os Pontos turísticos:\n");
    scanf("%d",&pontosturisticos);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a Área:");
    scanf("%f", &area);

    printf("Estado: %s - Cidade: %s - Código da Cidade: %d\n", Estado, Cidade, codigo);
    printf("População: %d - Pontos Turísticos: %d\n", populacao, pontosturisticos);
    printf("PIB: %f - Área: %f\n" ,PIB, area);

    return 0;
}
  
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

