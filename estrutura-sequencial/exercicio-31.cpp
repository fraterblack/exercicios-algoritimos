#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float peso;
    
    printf("Informe seu peso (Kg)): ");
	scanf("%f", &peso);
	
	printf("O seu peso em gramas é %.2f \n", (peso * 1000));
	
	getch();
}
/*
31. Elabore um algoritmo que leia o peso de uma pessoa em quilos, calcule e mostre esse peso convertido em gramas.
*/
