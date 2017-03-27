#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float avaliacao1, avaliacao2, mediaAritimetica;
	
    printf("Informe a nota da avaliação 1: ");
	scanf("%f", &avaliacao1);
	
	printf("Informe a nota da avaliação 2: ");
	scanf("%f", &avaliacao2);
	
	mediaAritimetica = (avaliacao1 + avaliacao2) / 2;
	
	printf("Média Final: %.2f \n", mediaAritimetica);
		
	if (mediaAritimetica < 3) {
		printf("Reprovado");
	} else if (mediaAritimetica >= 3 && mediaAritimetica < 7) {
		printf("Prova Final (Necessário tirar nota: %.2f)", (12 - mediaAritimetica));
	} else {
		printf("Aprovado");
	}
	
	getch();
}
/*
23. Elabore um algoritmo que receba duas notas de um aluno, calcule e mostre a média aritmética, e a mensagem que segue a tabela abaixo. 
Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação final, considerando que a média no exame é 6,0.
considerando que a média é 7,0 para aprovação, menor que 3,0 para reprovação e as demais em prova final.
*/
