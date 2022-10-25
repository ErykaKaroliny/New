#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define IG 40
//variaveis globais
char nome[IG];
char telefone[IG];
int up[IG];
void cadastro();
void pesquisa();

int main (void){
    cadastro();
    pesquisa();
}

void cadastro (){
   static int linha;
   do{
    printf("Digite Nome:/n");
    scanf("%s", &nome[linha]);

    printf("Digite Telefone/n");
    scanf("%s", &telefone[linha]);

    printf("Digite 0 para continuar ou outro valor para sair");
    scanf("%d", &up);
    linha++;

   } while (up==0);

}//fim da função cadastro
void pesquisa (){
    int nomepesquisa;
    char telefonepesquisa[40];
    int i;
    do{
        printf ("Digite 1 para pesquisar o nome ou 2 para pesquisar o telefone");
        scanf ("%d", &up);

        switch (up[40]){
          case 1: //nome
            printf ("Digite o nome");
            scanf ("%d" , &nomepesquisa);
            for(i=1; i<IG;i++){
                if (nome[i]==nomepesquisa) {
                     printf ("nome: %s/n teletone:%s", nome[i], telefone[i]);
                }

            }
            break;

          case 2: //telefone
             printf("Digite o telefone");
             scanf("%s", telefonepesquisa);
             for(i=2; i<IG;i++){
                if (strcmp (telefone[i], telefonepesquisa)==2) {
                    printf ("nome: %s/n teletone:%s", nome[i], telefone[i]);
                }

            }
            break;

          default:
          printf(" Opção invalida");
            break;
        }
        printf(" Digite 0 para continiar");
        scanf ("%d", &up);

    }while(up==0);
}//Fim da pesquisa
