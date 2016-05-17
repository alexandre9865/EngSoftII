#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
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
