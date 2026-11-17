#include <iostream>
#include "sorteiaPalavra.hpp"
#include <ctime>
#include <cstdlib>
#include <cstring>

#define TAMANHO_PALAVRA 6 //5 letras + \0

using namespace std;

void preenchePalavra(char palavraDigitada[], int tam){

    char entrada[100];

    cout << "Digite a palavra: " << endl;
    cin.getline(entrada, 100);

    if (strlen(entrada) != tam - 1) {
        cout << "A palavra deve conter 5 caracteres";
    }

    while(strlen(entrada) != tam - 1){
        cout << "Digite novamente: " << endl;
        cin.getline(entrada, 100);
    }
    
    for (int i = 0; i < tam; i++){
        palavraDigitada[i] = entrada[i];
    }
}

void verificaIgualdade(char palavra[], char palavraDigitada[], char resultado[], int tam){
    for(int i = 0; i < tam-1; i++) {
        if (palavraDigitada[i] == palavra[i]){
            resultado[i] = 'V';
        } else {
            for(int j = 0; j < tam; j++) {
                if (palavraDigitada[i] == palavra[j]) {
                    resultado[i] = 'A';
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
    
    char resultado[100] = "XXXXX";
    verificaIgualdade(palavra, palavraDigitada, resultado, TAMANHO_PALAVRA);
    cout << resultado;

    return 0;
}