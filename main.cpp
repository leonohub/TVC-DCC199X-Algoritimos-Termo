#include <iostream>
#include "sorteiaPalavra.hpp"
#include <ctime>
#include <cstdlib>

#define TAMANHO_PALAVRA 6 //5 letras + \0

using namespace std;

int main() {
    int seed = time(0);
    srand(seed);

    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout<<palavra;

    return 0;
}