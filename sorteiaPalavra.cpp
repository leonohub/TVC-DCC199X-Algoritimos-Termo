#include "sorteiaPalavra.hpp"
#include <cstdlib>

void sorteiaPalavra (char palavra[], int tam) {
    char palavras[30][tam] = {        
        "livro",
        "pedra",
        "chuva",
        "tempo",
        "mundo",
        "terra",
        "olhar",
        "ponta",
        "vento",
        "festa",
        "porta",
        "carta",
        "noite",
        "sorte",
        "campo",
        "praia",
        "nuvem",
        "folha",
        "fruta",
        "peixe",
        "tigre",
        "verde",
        "preto",
        "linha",
        "corpo",
        "sonho",
        "ponto",
        "risco",
        "chave",
        "navio"
    };

    int palavraEscolhidaAleatoria = rand() % 30; //gerando um número aleatório de 0 até 30

    for (int i = 0; i < tam; i++){
        palavra[i] = palavras[palavraEscolhidaAleatoria][i];
    }
}
