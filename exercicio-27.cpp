#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float base, altura;
    
    printf("Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	printf("A �rea do tri�ngulo � de %.2f", ((base * altura) / 2));
	
	getch();
}
/*
27. Elabore um algoritmo que calcule e mostre a �rea de um tri�ngulo.
Sabe-se que: �rea do tri�ngulo = (base * altura)
                                       2
*/
