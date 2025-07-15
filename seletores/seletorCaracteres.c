

#include <stdio.h>
#include <string.h>


const char lista[] = {
    'a','b','c','d','e','f','g','h',
    'i','j','k','l','m','n','o','p',
    'q','r','s','t','u','v','w','x',
    'y','z',' '
};

void seletorNumerosDadosUsuario(char dadosUsuario[], int numerosDadosEntrada[],int quant)
{
    int indiceDadosUsuario = 0;
    int indiceListaDeCaracteres = 0;
    int indiceNum = 0;
    int indiceLista = 0;
    int tam = sizeof(numerosDadosEntrada[0]);
    int quantNum = 0;

    printf("Tamanho em Bytes do caractere: %d",tam);
    getchar();

    printf("Tamanho de numerosDadosEntrada em Bytes: %d\n",quant);

    quant = quant / sizeof(numerosDadosEntrada[0]);

//    printf("Tamanho de numerosDadosEntrada em Bytes: %d\n",quant);

    while(indiceNum <= quant - 1){
        numerosDadosEntrada[indiceNum] = quant;
        printf("%d : %d\n",indiceNum,numerosDadosEntrada[indiceNum]);
        indiceNum++;
    }

    printf("\nDados do Usuario:\n");
    while(indiceDadosUsuario <= strlen(dadosUsuario) - 1)
    {
        printf("%c ",dadosUsuario[indiceDadosUsuario]);
        indiceDadosUsuario++;
    }
    printf("\n\n");
    while(indiceLista <= sizeof(lista) / sizeof(lista[0]))
    {
        printf("%c ",lista[indiceLista]);
        indiceLista++;
    }
    indiceDadosUsuario = 0;
    indiceLista = 0;

    while(indiceDadosUsuario <= strlen(dadosUsuario) - 1)
    {
        while(indiceLista <= sizeof(lista) / sizeof(lista[0]) - 1)
        {
            if(dadosUsuario[indiceDadosUsuario] == lista[indiceLista])
            {
                numerosDadosEntrada[indiceDadosUsuario] = indiceLista;
                quantNum = quantNum + 1;
                indiceLista = 0;
                break;
            }
            else{
                indiceLista++;
            }
        }
        indiceDadosUsuario++;
    }
    printf("\nNumeros Dados Entrada:\n");
    indiceNum = 0;
    while(indiceNum <= quantNum - 1)
    {
        printf("%d ",numerosDadosEntrada[indiceNum]);
        indiceNum++;
    }
    getchar();
}
