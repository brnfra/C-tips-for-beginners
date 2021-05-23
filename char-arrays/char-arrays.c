/*
 * =====================================================================================
 *
 *       Filename:  char-arrays.c
 *
 *    Description:  Some applications from arrays manipulation
 *
 *        Version:  1.0
 *        Created:  05/23/2021 10:47:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BRUNO FRANCO (https://github.com/brnfra/), devlabbr@gmail.com
 *         Made by VIM ;D
 *
 * =====================================================================================
 */
#if defined(WIN32) || defined(_WIN32) ||  defined(__WIN32__) || defined(__NT__)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#elif __linux__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#endif
// Aux Procedures{{{
//clean screen
void clrscr()
{
    system("@cls||clear");

}
//remove carriage return and line from inputs
void clear()
{
    while ( getchar() != '\n' );
}
// }}}
/* Arrays manipulations{{{  */
//copia valor de orig  na variavel dest 
void strCopy(char *dest, char *orig) {
    int i; 
    for (i=0 ; orig[i]!='\0' ; i++) 
        dest[i] = orig[i]; 
   
    dest[i] = '\0'; 
}

//return the length
int strLength(char *s){
    int i = 0;
    while(s[i] != '\0')
        i++;

return i;

}
//is NULL? return true or false
int isNull(char *s){
    return ( s[0] == '\0' );
}
/*}}}*/
//void strConcat() next
//teste cadastro {{{
int Teste_cadastro() {

char nomeo[50]="Foo Bar Name\0";
char nomed[50];

char cpfo[50]="01234554343\0";
char cpfd[50];

char sexoo[1]="M";
char sexod[1];
//int leng = strLength(paciente_teste.nome);

strCopy( nomed , nomeo );
strCopy( cpfd , cpfo);

strCopy(sexod,sexoo);



    return 0;

}
/*}}}*/
//  teste questionário {{{
int Teste_questionario(){
    int pts=0;
    char resposta;

    printf("%s","\nTESTE DE Questionário . Responda as perguntas com (S)im ou (N)ão;\n");
    
  do{
        printf("%s","\nTeste SIM ou NAO? ");
        scanf("%s",&resposta);
        fflush(stdin);
        printf("valor recebido %c\n",resposta); 
       // strCopy(resposta,receive);
        if((resposta == 'S') || (resposta == 'N')){
            //dif char ASCII se for maiuscula(vem primeiro)
            resposta=resposta + 32;
        };
        if(resposta == 's'){
            printf("Respondeu SIM\n"); 
            pts+=100;
        }else{
            printf("Respondeu NAO\n"); 
        }
        printf("Teste de while %c\n",resposta);
        printf("Pontos - %i\n",pts); 
    }while((resposta == 's' )||(resposta == 'n'));
   
    return 0;
}
///}}}

/*     Constants       */
#define EXIT_SUCCESS 0

int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"en_US.iso885915");

    /*     Your Program Here!      */
    clrscr();
    Teste_cadastro();
    Teste_questionario(); 
    return EXIT_SUCCESS;
}
