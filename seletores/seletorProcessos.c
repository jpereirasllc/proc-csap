

#include <stdio.h>
#include <string.h>
#include "../prototipos/cabecalho.h"

void seletorProcessosDadosUsuario(int opcao, char mensagem[],char chave[])
{
    int numerosDadosEntrada[151];
    int indiceNumeros = 0;
    int quant;

    printf("Processo Seletor\n");
    printf("Mensagem digitada: %sChave digitada: %s",mensagem,chave);

    if(opcao == 1){
        if(strlen(chave) < strlen(mensagem))
        {
        modificaComprimentoDaChave(mensagem,chave);
        }
        printf("Chave modificada: %s\n",chave);
        modificaComprimentoDaMensagem(mensagem);
        printf("Comprimento da mensagem: %d\n",strlen(mensagem));
        printf("Comprimento da chave: %d ",strlen(chave));
        getchar();

        printf("%d\n",sizeof(numerosDadosEntrada));
        printf("%d\n",sizeof(numerosDadosEntrada) / sizeof(numerosDadosEntrada[0]));

        quant = sizeof(numerosDadosEntrada);
        printf("%d\n",quant);
        getchar();
        
      seletorNumerosDadosUsuario(mensagem,numerosDadosEntrada,quant);
      seletorNumerosDadosUsuario(chave,numerosDadosEntrada,quant);
    }
    
}
