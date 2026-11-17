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

void verificaIgualdade(char palavra[], char palavraDigitada[], char resultado[], int tam){
    for(int i = 0; i < tam-1; i++) {
        if (palavraDigitada[i] == palavra[i]){
            resultado[i] = 'V';
        } else {
            for(int j = 0; j < tam; j++) {
                if (palavraDigitada[i] == palavra[j]) {
                    resultado[i] = 'L';
                }
            }
        }
    }
}

int main() {
    int seed = time(0);
    srand(seed);

    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout<<palavra;
    char palavraDigitada[TAMANHO_PALAVRA];
    preenchePalavra(palavraDigitada, TAMANHO_PALAVRA);
    
    char resultado[100] = "PPPPP";
    verificaIgualdade(palavra, palavraDigitada, resultado, TAMANHO_PALAVRA);
    cout << resultado;

    return 0;
}