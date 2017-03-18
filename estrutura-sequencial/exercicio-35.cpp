#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int anoNascimento, anoAtual, idadeEmAnos;
    
    printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
    printf("Informe o ano do nascimento: ");
	scanf("%d", &anoNascimento);
	
	while (anoNascimento > anoAtual) {
		printf("O ano atual não pode ser menor que a data de nascimento!!! \n");
		printf("Informe novamente o ano do nascimento: ");
		scanf("%d", &anoNascimento);
	}
	
	idadeEmAnos = (anoAtual - anoNascimento);
	
	printf("Idade em anos: %d \n", idadeEmAnos);
	printf("Idade em meses: %d \n", (idadeEmAnos * 12));
	printf("Idade em dias: %d \n", (idadeEmAnos * 365));
	printf("Idade em semanas: %d \n", (idadeEmAnos * 52));
	
	getch();
}

/*
35. Elabore um algoritmo que receba o ano de nascimento de uma pessoa, e o ano atual, calcule e mostre:
a. A idade dessa pessoa em anos
b. A idade dessa pessoa em meses
c. A idade dessa pessoa em dias
d. A idade dessa pessoa em semanas
Obs: Considere que o ano a ser informado deverá ser menor ou igual ao ano atual
*/
