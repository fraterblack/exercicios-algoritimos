#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int anoNascimento, anoAtual;
    
    printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
    printf("Informe o ano do nascimento: ");
	scanf("%d", &anoNascimento);
	
	while (anoNascimento > anoAtual) {
		printf("O ano atual não pode ser menor que a data de nascimento!!! \n");
		printf("Informe novamente o ano do nascimento: ");
		scanf("%d", &anoNascimento);
	}

	printf("A pessoa em questão possui %d anos \n", (anoAtual - anoNascimento));
	
	printf("Essa pessoa terá %d anos em 2030 \n", (2030 - anoNascimento));
	
	getch();
}

/*
34. Elabore um algoritmo que receba o ano de nascimento de uma pessoa, e o ano atual, calcule e mostre:
a. A idade dessa pessoa
b. Quantos anos essa pessoa terá em 2030
Obs: Considere que o ano a ser informado deverá ser menor ou igual ao ano atual
*/
