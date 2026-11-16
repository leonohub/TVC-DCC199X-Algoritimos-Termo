#include <iostream>

using namespace std;

void sorteiaPalavra (char palavra[]) {
    char palavras[5][6]{        
        "livro",
        "pedra",
        "chuva",
        "tempo",
        "mundo"
    };

    int palavraEscolhidaAleatoria = 1; //definido como 1, futuramente fazer alguma forma de isso ser aleatório(iá sortear somente 1 primeira palavra)

    for (int i = 0; i < 6; i++){
        palavra[i] = palavras[palavraEscolhidaAleatoria][i];
    }
}

int main() {
    char palavra[6];
    sorteiaPalavra(palavra);
    cout<<palavra;

    return 0;
}