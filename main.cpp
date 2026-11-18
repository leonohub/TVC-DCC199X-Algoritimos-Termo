#include <iostream>
#include "sorteiaPalavra.hpp"
#include <ctime>
#include <cstdlib>
#include <cstring>

#define TAMANHO_PALAVRA 6 // 5 letras + \0
#define TENTATIVAS_MAX 6 // de acordo com o termo normal kkk são 6 tentativas e aumenta em 1 com o aumento de palavras | dueto são 7...

using namespace std;

bool verificaValidadePalavra(char entrada[], int tam)
{
    if (strlen(entrada) != tam - 1)
    {
        cout << "A palavra deve conter 5 caracteres" << endl;
        return false;
    }
    for (int i = 0; i < tam - 1; i++)
    {
        if (!((entrada[i] >= 'a' && entrada[i] <= 'z') || (entrada[i] >= 'A' && entrada[i] <= 'Z')))
        {
            cout << "A palavra deve conter somente letras" << endl;
            return false;
        }
    }
    return true;
}

void preenchePalavra(char palavraDigitada[], int tam)
{
    char entrada[100];

    cout << "Digite a palavra: " << endl;
    cin.getline(entrada, 100);
    bool palavraValida = verificaValidadePalavra(entrada, tam);

    while (!palavraValida)
    {
        cout << "Digite a palavra: " << endl;
        cin.getline(entrada, 100);
        palavraValida = verificaValidadePalavra(entrada, tam);
    }

    for (int i = 0; i < tam; i++)
    {
        palavraDigitada[i] = entrada[i];
    }
}

void limpaString (char string[], int tam){
    for(int i = 0; i < tam - 1 ; i++) {
        string[i] = 'X';
    }
}

int verificaIgualdade(char palavra[], char palavraDigitada[], char resultado[], int tam){
    int letrasPosCerta = 0;
    limpaString(resultado, tam);
    for (int i = 0; i < tam - 1; i++)    {
        if (palavraDigitada[i] == palavra[i])
        {
            resultado[i] = 'V';
            letrasPosCerta++;
        }
        else
        {
            for (int j = 0; j < tam; j++)
            {
                if (palavraDigitada[i] == palavra[j])
                {
                    resultado[i] = 'A';
                }
            }
        }
    }
    return letrasPosCerta;
}

int main()
{
    int seed = time(0);
    srand(seed);

    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout << palavra;

    char palavraDigitada[TAMANHO_PALAVRA];
    char resultado[TAMANHO_PALAVRA];
    
    for (int tentativas = 0; tentativas < TENTATIVAS_MAX; tentativas++){
        cout << resultado << endl;
        preenchePalavra(palavraDigitada, TAMANHO_PALAVRA);
        int letrasPosCerta = verificaIgualdade(palavra, palavraDigitada, resultado, TAMANHO_PALAVRA);
        cout << resultado << endl;
        if (letrasPosCerta == TAMANHO_PALAVRA - 1) {
            cout << "venceu";
            break;
        }
    }
    return 0;
}