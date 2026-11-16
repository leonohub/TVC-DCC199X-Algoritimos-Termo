#include "sorteiaPalavra.hpp"

void sorteiaPalavra (char palavra[], int tam) {
    char palavras[5][tam] = {        
        "livro",
        "pedra",
        "chuva",
        "tempo",
        "mundo"
    };

    int palavraEscolhidaAleatoria = 0; //definido como 0, futuramente fazer alguma forma de isso ser aleatório(iá sortear somente 1 primeira palavra)

    for (int i = 0; i < tam; i++){
        palavra[i] = palavras[palavraEscolhidaAleatoria][i];
    }
}