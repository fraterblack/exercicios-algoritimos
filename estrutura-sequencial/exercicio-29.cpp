#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float raio;
    
    printf("Informe o raio do c�rculo: ");
	scanf("%f", &raio);
	
	printf("A �rea do c�rculo � de %.2f", (3.14 * pow(raio, 2)));
	
	getch();
}
/*
29. Elabore um algoritmo que calcule e mostre a area de um circulo.
Sabe-se que: Area do circulo = (PI) * R2
*/
