#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float nota1, nota2, nota3, media;
    
    printf("Informe nota 1: ");
	scanf("%f", &nota1);
	
	printf("Informe nota 2: ");
	scanf("%f", &nota2);
	
	printf("Informe nota 3: ");
	scanf("%f", &nota3);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
	
	printf("A média ponderada do aluno é: %.2f", media);
	
	getch();
}

/*
18. Elabore um algoritmo que leia 3 notas de um aluno, calcule e mostre a média ponderada,
considerando os seguintes pesos: 2 para a primeira nota, 3 para a segunda nota, e 5 para a terceira
nota.
*/
