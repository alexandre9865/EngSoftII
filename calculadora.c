//Alexandre Martins Montebelo 157645
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

char escolha = -1;
int soma(){
    float a, b, total;
    int loop;
    
    do{
	    printf("----MODULO SOMA----\n");
	    printf("Digite dois numeros para soma:\n");
	    scanf("%f", &a);
	    scanf("%f", &b);
	    total = a+b;
	    printf("A soma eh %f", total);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara voltar ao menu digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}

int subtracao(){
    float a, b, total;
    int loop;
    
    do{
	    printf("----MODULO SUBTRACAO----\n");
	    printf("Digite dois numeros para subtracao:\n");
	   	scanf("%f", &a);
	    scanf("%f", &b);
	    total = a-b;
	    printf("A subtracao eh %f", total);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara voltar ao menu digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}
int multiplicacao(){
    float a, b, total;
    int loop;
    
    do{
	    printf("----MODULO MULTIPLICACAO----\n");
	    printf("Digite dois numeros para multiplicacao:\n");
	    scanf("%f", &a);
	    scanf("%f", &b);
	    total = a*b;
	    printf("A multiplicacao eh %f", total);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara voltar ao menu digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}
int divisao(){
    float a, b, total;
    int loop;
    
    do{
	    printf("----MODULO DIVISAO----\n");
	    printf("Digite dois numeros para dividir:\n");
	    scanf("%f", &a);
	    scanf("%f", &b);
	    total = a/b;
	    printf("A divisao eh %f", total);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara voltar ao menu digite: 0\n");
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}

int direciona(int op){
	switch (op){
		case 1:
			soma();
			break;
		case 2:
			subtracao();
			break;
		case 3:
			multiplicacao();
			break;
		case 4:
			divisao();
			break;
	}
	
}

int main(){
	do{
		printf("1. Soma;\n");
		printf("2. Subtracao;\n");
		printf("3. Multiplicacao;\n");
		printf("4. Divisao;\n");
		printf("\nPara sair digite: 0\n" );
	    scanf("%d", &escolha);
	    if(escolha>=1 || escolha<=4){
			system("cls");
	    	direciona(escolha);
		}
	}while(escolha != 0);
}



