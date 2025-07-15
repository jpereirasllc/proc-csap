/*


  30/Junho/2025 | 19:48
*/

#include <stdio.h>
#include <stdlib.h>
#include "prototipos/cabecalho.h"

int main(void){

  int opcao;
  while (1) {
    system( "clear" );
    printf("Hello world!\n"
           "*******************\n"
           "1-Criptografar\n"
           "2-Descriptografar\n"
           "0-Sair\n");
    scanf("%d",&opcao);
    setbuf(stdin,NULL);
    if(opcao == 1 || opcao == 2){
      system("clear");
      entradaDadosUsuario(opcao);
    }
    else if(opcao == 0){
      system("clear");
      printf("Programa encerrado...\n");
      getchar();
      system("clear");
      break;
    }
  }
  system("tree");
  return 0;
}
