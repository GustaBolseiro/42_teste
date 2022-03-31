#include <stdio.h>

char nome[10];

int main(){
	printf("Digite seu nome abaixo: \n");
	scanf("%s", &nome);

    printf("Seu nome eh: %s \n", nome);
	return 0;
}