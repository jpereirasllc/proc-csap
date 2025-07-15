

#include <stdio.h>
#include "../prototipos/cabecalho.h"


void entradaDadosUsuario (int opcao)
{
  char mensagem[151];
  char chave[151];
  

  if(opcao == 1){
    printf("Criptografia");
  }
  else if(opcao == 2){
    printf("Descriptografia");
  }
  printf("\n**********************\n"
         "Mensagem:\n");
  fgets(mensagem,151,stdin);
  setbuf(stdin,NULL);
  printf("Chave:\n");
  fgets(chave,151,stdin);
  setbuf(stdin,NULL);

  seletorProcessosDadosUsuario(opcao,mensagem,chave);
}
