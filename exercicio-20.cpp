#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salario, media;
    
    printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	
	printf("O novo sal�rio do funcion�rio �: %.2f", (salario * 1.25));
	
	getch();
}

/*
20. Elabore um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio,
sabendo-se que este sal�rio sofreu um aumento de 25%.
*/
