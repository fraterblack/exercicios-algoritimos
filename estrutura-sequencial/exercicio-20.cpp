#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salario, media;
    
    printf("Informe o salário: ");
	scanf("%f", &salario);
	
	printf("O novo salário do funcionário é: %.2f", (salario * 1.25));
	
	getch();
}

/*
20. Elabore um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário,
sabendo-se que este salário sofreu um aumento de 25%.
*/
