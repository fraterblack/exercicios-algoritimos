#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float avaliacao1, avaliacao2, mediaAritimetica;
	
    printf("Informe a nota da avalia��o 1: ");
	scanf("%f", &avaliacao1);
	
	printf("Informe a nota da avalia��o 2: ");
	scanf("%f", &avaliacao2);
	
	mediaAritimetica = (avaliacao1 + avaliacao2) / 2;
	
	printf("M�dia Final: %.2f \n", mediaAritimetica);
		
	if (mediaAritimetica < 3) {
		printf("Reprovado");
	} else if (mediaAritimetica >= 3 && mediaAritimetica < 7) {
		printf("Prova Final (Necess�rio tirar nota: %.2f)", (12 - mediaAritimetica));
	} else {
		printf("Aprovado");
	}
	
	getch();
}
/*
23. Elabore um algoritmo que receba duas notas de um aluno, calcule e mostre a m�dia aritm�tica, e a mensagem que segue a tabela abaixo. 
Para alunos de exame, calcule e mostre a nota que dever� ser tirada no exame para aprova��o final, considerando que a m�dia no exame � 6,0.
considerando que a m�dia � 7,0 para aprova��o, menor que 3,0 para reprova��o e as demais em prova final.
*/
