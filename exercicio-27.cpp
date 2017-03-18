#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float base, altura;
    
    printf("Informe a base do triângulo: ");
	scanf("%f", &base);
	
	printf("Informe a altura do triângulo: ");
	scanf("%f", &altura);
	
	printf("A área do triângulo é de %.2f", ((base * altura) / 2));
	
	getch();
}
/*
27. Elabore um algoritmo que calcule e mostre a área de um triângulo.
Sabe-se que: Área do triângulo = (base * altura)
                                       2
*/
