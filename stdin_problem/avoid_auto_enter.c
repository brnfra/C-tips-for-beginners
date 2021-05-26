/*
 * =====================================================================================
 *
 *       Filename:  avoid_auto_enter.c
 *
 *    Description:  Program to show how to avoid input error
 *
 *        Version:  1.0
 *        Created:  05/22/2021 08:06:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bruno Franco 
 *   Organization:  brnfra
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define EXIT_SUCCESS 0
//https://stackoverflow.com/questions/7898215/how-to-clear-input-buffer-in-c
void clear()
{
    while ( getchar() != '\n' );
}

void test_without_clear(){
    char nome[50];
    char cpf[14];
    char sexo[1];
  printf("%s","\n\nBem vindo, Teste de entrada através do stdin SEM limpar return char \n");
    printf("\n%s","Digite seu CPF- ");
       
    scanf("%[^\n]s",cpf);
    fflush(stdin);

    printf("\n%s", "Digite seu nome- ");
    
    scanf("%49[^\n]s",nome);
    fflush(stdin);
    
    printf("\n%s", "Sexo(M/F/O)- ");
    
    scanf("%1[^\n]s",sexo);
    fflush(stdin);

    printf("\nNome = %s",nome); 
    printf("\nCPF = %s",cpf); 
    printf("\nSexo= %s",sexo); 

}

void test_with_clear(){
    char nome[50];
    char cpf[14];
    
    //var created to inputs
    char input[256];

    char sexo[1];
    printf("%s","\n\n\nBem vindo, Teste de entrada através do stdin COM limpeza do return char \n");

    clear(); 
    
//https://stackoverflow.com/questions/9278226/which-is-the-best-way-to-get-input-from-user-in-c
    fflush(stdin);
        //vale o 1
        //
        printf("\n%s", "Digite seu nome- ");
        fgets(input, sizeof(input), stdin);
        //array of chars
        if (1 != sscanf(input, "%[^\n]s", nome)) {
        printf("Invalid Name\n"); 
        }

        printf("\n%s", "Digite seu cpf- ");
        fgets(input, sizeof(input), stdin);
        fflush(stdin);
        if (1 != sscanf(input, "%[^\n]s", cpf)) {
        printf("Invalid cpf\n");     
        }

        printf("\n%s", "Digite seu sexo- ");
        fgets(input, sizeof(input), stdin);
        fflush(stdin);
        if (1 != sscanf(input, "%[^\n]s", sexo)) {
            printf("Invalid sexo\n"); 
        }
    
 //   clear();
   // scanf("%1s",sexo);
    printf("\nNome = %s",nome); 
    printf("\nCPF = %s",cpf); 
    printf("\nSexo= %s",sexo); 

}

/*     Constants       */
int main(int argc, char *argv[]) {

    /*     Your Program Here!      */
    test_without_clear();
    test_with_clear();

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
        system("pause");return (EXIT_SUCCESS);
#elif __linux__
    return EXIT_SUCCESS;
#endif
}
