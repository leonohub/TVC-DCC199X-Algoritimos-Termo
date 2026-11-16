#include "sorteiaPalavra.hpp"
#include <cstdlib>

void sorteiaPalavra (char palavra[], int tam) {
    char palavras[5][tam] = {        
        "livro",
        "pedra",
        "chuva",
        "tempo",
        "mundo"
    };

    int palavraEscolhidaAleatoria = rand() % 5; //gerando um número aleatório de 0 até 5

    for (int i = 0; i < tam; i++){
        palavra[i] = palavras[palavraEscolhidaAleatoria][i];
    }
}