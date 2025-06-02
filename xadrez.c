#include <stdio.h>

// adição das funções recursivas
// Função recursiva para o movimento da Torre
void moverTorre(int movimentos) {
    
    if (movimentos <= 0) {
        return;
    }
    // Imprime a direção do movimento atual.
    printf("Direita\n");
    // Chama a função recursivamente para o próximo movimento.
    moverTorre(movimentos - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int movimentos) {
    // Caso base da recursão: quando não há mais movimentos a fazer.
    if (movimentos <= 0) {
        return;
    }
    // Imprime a direção do movimento atual.
    printf("Esquerda\n");
    // Chama a função recursivamente para o próximo movimento.
    moverRainha(movimentos - 1);
}

// Função para o movimento do Bispo recursivo e aninhados
// O loop externo controla o movimento vertical, e o interno o horizontal.
void moverBispo(int movimentos) {
    
    // Cada iteração do loop externo representa um "passo" diagonal.
    for (int i = 0; i < movimentos; i++) {
        // Loop interno para o movimento horizontal (simulando 'Direita').
        // Para um movimento puramente diagonal, o loop interno executa apenas uma vez
        // por cada passo vertical, garantindo a diagonal.
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n"); // Imprime a direção diagonal
        }
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // declaração de variaveis

    int Torre = 5; // Número de casas a mover
    int Bispo = 5; // Número de casas a mover
    int Rainha = 8; // Número de casas a mover
    int CavaloBaixo = 2;
    int cavaloLado = 1;
    int contadorCavalo = 0; // Contador para controlar as interações do while
    int contadorBispo = 0; // Contador para controlar as iterações do 'while'
    int contadorRainha = 0; // Contador para controlar as iterações do 'do-while'

    // A Torre se move horizontalmente ou verticalmente.
    // Uso do for para o movimento da torre 5 casas para direita
    printf("______ Movimento da Torre______\n");
    printf("\n");

    // Chamando da função recursiva para a Torre, usando sua variável 'Torre'.
    moverTorre(Torre);
    printf("\n"); 

    // O Bispo se move na diagonal.
    // uso do while para o movimento do bispo 5 casas diagonal, para cima e a direita
    printf("______Movimento do Bispo______\n");
    printf("\n");

    moverBispo(Bispo);
    printf("\n"); 

    // A Rainha se move em todas as direções.
    // Uso do Do While para o movimento da Rainha 8 casas para esquerda
    printf("______Movimento da Rainha______\n");
    printf("\n");
    
    moverRainha(Rainha);
    printf("\n");  

    // O Cavalo se move horizontalmente ou verticalmente e de forma perpendicular formando um L
    // Uso do while e for para o movimento do cavalo 2 casas para baixo e uma para esquerda
    printf("______ Movimento do Cavalo______\n");
    printf("\n");


    while(contadorCavalo < CavaloBaixo){
        printf("Baixo\n"); // imprime a direção do cavalo
        for(int i = 0; i < cavaloLado && contadorCavalo == CavaloBaixo -1; i++){
            printf("Esquerda\n"); // imprime a direção do cavalo
        }

        contadorCavalo++;
    }
    printf("\n");


    return 0;
}
