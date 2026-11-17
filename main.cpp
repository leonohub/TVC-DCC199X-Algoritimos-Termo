#include <iostream>
#include "sorteiaPalavra.hpp"
#include <ctime>
#include <cstdlib>
#include <cstring>

#define TAMANHO_PALAVRA 6 // 5 letras + \0

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

void verificaIgualdade(char palavra[], char palavraDigitada[], char resultado[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        if (palavraDigitada[i] == palavra[i])
        {
            resultado[i] = 'V';
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
}

int main()
{
    int seed = time(0);
    srand(seed);

    char palavra[TAMANHO_PALAVRA];
    sorteiaPalavra(palavra, TAMANHO_PALAVRA);
    cout << palavra;
    char palavraDigitada[TAMANHO_PALAVRA];

    preenchePalavra(palavraDigitada, TAMANHO_PALAVRA);

    char resultado[100] = "XXXXX";
    verificaIgualdade(palavra, palavraDigitada, resultado, TAMANHO_PALAVRA);
    cout << resultado;

    int a = 0;

    for (int i = 0; i < 5; i++)
    {
        if (resultado[i] == 'V')
        {
            a++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (a != 5)
        {
            preenchePalavra(palavraDigitada, TAMANHO_PALAVRA);

            char resultado[100] = "XXXXX";
            verificaIgualdade(palavra, palavraDigitada, resultado, TAMANHO_PALAVRA);
            cout << resultado;
            a = 0;
            for (int i = 0; i < 5; i++)
            {
                if (resultado[i] == 'V')
                {
                    a++;
                }
            }
        }
    }

    return 0;
}