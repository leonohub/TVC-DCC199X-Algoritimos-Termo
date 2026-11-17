#include <iostream>
#include "sorteiaPalavra.hpp"
#include <ctime>
#include <cstdlib>

#define TAMANHO_PALAVRA 6 //5 letras + \0

using namespace std;

void preenchePalavra(char palavraDigitada[], int tam){
    cout << "Digite a palavra: " << endl;
    cin.getline(palavraDigitada, tam); 
}



int main() {
    int seed = time(0);
    srand(seed);

    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout<<palavra;
    char palavraDigitada[TAMANHO_PALAVRA];
    preenchePalavra(palavraDigitada, TAMANHO_PALAVRA);
    cout << "A palavra digitada é: " << palavraDigitada;

    return 0;
}