#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float altura;
    char sexo[10];
    
    printf("Informe o sexo: ");
	scanf("%s", &sexo);
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	if (strcmp(sexo, "masculino") == 0 || strcmp(sexo, "Masculino") == 0) {
		printf("Peso ideal � %.3f", ((72.7 * altura) - 58));
	} else if(strcmp(sexo, "feminino") == 0 || strcmp(sexo, "Feminino") == 0) {
		printf("Peso ideal � %.3f", ((62.1 * altura) - 44.7));
	} else {
		printf("O sexo informado � inv�lido");
	}
	
	getch();
}
/*
20. Segundo uma tabela m�dica, o peso ideal est� relacionado com a altura e o sexo. 
Elabore um algoritmo que leia a altura e o sexo de uma pessoa, calcule e imprima seu peso ideal, utilizando as seguintes f�rmulas.
Masculino -> (72,7 * altura) - 58
Feminino -> (62,1 * altura) � 44,7
*/
