#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[40];
    float avaliacao1, avaliacao2, mediaAritimetica;
    
    printf("Informe o nome: ");
	gets(nome);
	fflush(stdin);
	
    printf("Informe a nota da avaliação 1: ");
	scanf("%f", &avaliacao1);
	
	printf("Informe a nota da avaliação 2: ");
	scanf("%f", &avaliacao2);
	
	mediaAritimetica = (avaliacao1 + avaliacao2) / 2;
	
	printf("Nome do Aluno: %s \n", nome);
	printf("Avaliação 1: %.2f \n", avaliacao1);
	printf("Avaliação 2: %.2f \n", avaliacao2);
	printf("Média Final: %.2f \n", mediaAritimetica);
		
	if (mediaAritimetica < 3) {
		printf("Reprovado");
	} else if (mediaAritimetica >= 3 && mediaAritimetica < 7) {
		printf("Prova Final");
	} else {
		printf("Aprovado");
	}
	
	getch();
}
/*
22. Elabore um algoritmo que leia o nome, nota da avaliação 1 e nota da avaliação 2 de um aluno. 
Ao final, imprima o nome do aluno, suas notas, a média aritmética e uma das mensagens: 
Aprovado, Reprovado ou em Prova Final, considerando que a média é 7,0 para aprovação, menor que 3,0 para reprovação e as demais em prova final.
*/
