#include <iostream>
#include "sorteiaPalavra.hpp"

#define TAMANHO_PALAVRA 6 //5 letras + \0

using namespace std;

int main() {
    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout<<palavra;

    return 0;
}