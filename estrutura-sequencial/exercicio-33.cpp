#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    
    float temperatura;
    printf("Informe a temperatura em Célsius: ");
	scanf("%f", &temperatura);
	
	//printf("A conversão da temperatura para Fahrenheit é %.2f \n", ((180 * (temperatura + 32)) / 100));
	printf("A conversão da temperatura para Fahrenheit é %.f \n", ceil(temperatura * 1.8000 + 32));
	
	getch();
}

/*
33. Elabore um algoritmo que receba uma temperatura em Celsius, 
calcule e mostre essa temperatura em Fahrenheit.
Sabe-se que F = 180*(C+32)
                   100
*/
