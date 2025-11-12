#include <stdio.h>
#include <string.h>

/*
    Programa: Cadastro de Territórios
    Autor: [Seu Nome]
    Descrição:
        Este programa demonstra o uso de struct em C para armazenar informações
        sobre territórios em um jogo ou simulação. Ele permite o cadastro de 5
        territórios, armazenando o nome, a cor do exército e a quantidade de tropas.
        Após o cadastro, todos os territórios são exibidos na tela.
*/

// Definição da estrutura que representa um território
struct Territorio {
    char nome[30];     // Nome do território
    char cor[10];      // Cor do exército associado
    int tropas;        // Quantidade de tropas alocadas
};

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    // Mensagem inicial explicando o funcionamento do sistema
    printf("=== SISTEMA DE CADASTRO DE TERRITORIOS ===\n");
    printf("Voce devera cadastrar 5 territorios informando:\n");
    printf(" - Nome do territorio\n - Cor do exercito\n - Quantidade de tropas\n\n");

    // Laço de repetição para entrada dos dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do %do territorio:\n", i + 1);

        // Entrada do nome do território
        printf("Nome: ");
        scanf("%s", territorios[i].nome);

        // Entrada da cor do exército
        printf("Cor do exercito: ");
        scanf("%s", territorios[i].cor);

        // Entrada da quantidade de tropas
        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("-------------------------------------\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== TERRITORIOS CADASTRADOS ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf(" Cor do exercito: %s\n", territorios[i].cor);
        printf(" Tropas: %d\n", territorios[i].tropas);
        printf("-------------------------------------\n");
    }

    printf("Fim do programa. Dados exibidos com sucesso!\n");

    return 0;
}