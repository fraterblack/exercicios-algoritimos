#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float num1, seno, coseno, tangente, cotangente, secante, cosecante;
    
    printf("Digite o ângulo: ");
	scanf("%f", &num1);
	
	seno = sin(num1);
	coseno = cos(num1);
	tangente = tan(num1);
	secante = 1/coseno;
	cotangente = 1/tangente;
	cosecante = 1/seno;
	
	printf("Seno: %.2f \n", seno);
	printf("Coseno: %.2f \n", coseno);
	printf("Tangente: %.2f \n", tangente);
	printf("Cotangente: %.2f \n", cotangente);
	printf("Secante: %.2f \n", secante);
	printf("Cosecante: %.2f \n", cosecante);
	
	getch();
}

/*
15. Elabore um algoritmo que leia um ângulo em graus e imprima: seno, co-seno, tangente, secante, cosecante,
e co-tangente deste ângulo.
*/
