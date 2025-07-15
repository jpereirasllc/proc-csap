

#include <stdio.h>
#include <string.h>


void modificaComprimentoDaMensagem(char mensagem[])
{
    char mensagemModificada[151];
    int indiceMensagem = 0;

    printf("Processo modificaComprimentoDaMensagem\nMensagem recebida: %s",mensagem);
    getchar();
    while(indiceMensagem <= strlen(mensagem) - 2){
        mensagemModificada[indiceMensagem] = mensagem[indiceMensagem];
        printf("\nIndice da Mensagem: %d\n",indiceMensagem);
        indiceMensagem++;
    }
    printf("\nMensagem modificada: %s\n",mensagemModificada);
    printf("Comprimento da Mensagem: %d\n ",strlen(mensagemModificada));
    getchar();
    strcpy(mensagem,mensagemModificada);
}

void modificaComprimentoDaChave(char mensagem[],char chave[])
{

    int indiceMensagem = 0;
    int indiceChave = 0;
    char chaveModificada[151] = "";
    char concat[2];
    char caractere;

    while(indiceMensagem <= strlen(mensagem) - 1){
        if(indiceChave == strlen(chave) - 1)
	{
            indiceChave = 0;
        }
        else{
            caractere = chave[indiceChave];
            //printf("indiceMensagem: %d\n",indiceMensagem);
            //printf("indiceChave: %d\n",indiceChave);
            sprintf(concat,"%c",caractere);
            strcat(chaveModificada,concat);
            indiceChave++;
        }
        indiceMensagem++;
    }
    strcpy(chave,chaveModificada);
}
