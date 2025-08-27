#include <stdio.h>

// --- Funcao para a Torre: recursiva ---
// Simula o movimento de 5 casas para a direita.
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}


// --- Funcao para o Bispo: loops aninhados ---
// Simula o movimento na diagonal para cima e a direita, usando loops aninhados.
// O loop externo (for) controla o movimento vertical, e o interno (for)
// controla o movimento horizontal.
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        // Loop externo para o movimento vertical (Cima)
        for (int j = 0; j < 1; j++) {
            printf("Cima");
        }
        // Loop interno para o movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf(", Direita\n");
        }
    }
}

// --- Funcao para a Rainha: recursiva ---
// Simula o movimento de 8 casas para a esquerda.
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// --- Funcao para o Cavalo: loops aninhados ---
// Simula o movimento em "L": 2 casas para cima e 1 para a direita.
void moverCavalo(int movimentos) {
    // Loop externo para o numero total de movimentos em L.
    for (int i = 0; i < movimentos; i++) {
        // Loop aninhado para as 2 casas para cima.
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        // Movimento de 1 casa para a direita.
        printf("Direita\n");
    }
}

int main() {
    // --- Chamadas das funcoes no main ---
    int casas_torre = 5;
    printf("--- Movimento da Torre ---\n");
    moverTorre(casas_torre);
    printf("\n");
    
    int casas_bispo = 5;
    printf("--- Movimento do Bispo ---\n");
    moverBispo(casas_bispo);
    printf("\n");

    int casas_rainha = 8;
    printf("--- Movimento da Rainha ---\n");
    moverRainha(casas_rainha);
    printf("\n");
    
    int movimentos_cavalo = 1;
    printf("--- Movimento do Cavalo ---\n");
    moverCavalo(movimentos_cavalo);
    printf("\n");

    return 0;
}

    // aqui para baixo é o xadrez aventureiro   
#if 0    
    // --- Simulação de Movimento da Torre (for) ---
    // Move-se cinco casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Simulação de Movimento do Bispo (while) ---
    // Move-se cinco casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo ---\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // --- Simulação de Movimento da Rainha (do-while) ---
    // Move-se oito casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    //
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);
    printf("\n"); 
    
    // --- Simulação de Movimento do Cavalo (loops aninhados) ---
    // Move-se em "L": duas casas para baixo e uma para a esquerda.
    printf("--- Movimento do Cavalo ---\n");
    int contador_cavalo = 0;
    int movimentos_cavalo = 1; // Número de movimentos do cavalo
    
    while (contador_cavalo < movimentos_cavalo) {
     
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
           printf("Esquerda\n");

        contador_cavalo++; 
    }
    printf("\n"); 

#endif




 