#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float numero, parteFracionaria;
    double intpart;

    
    printf("Informe um n�mero real: ");
	scanf("%f", &numero);
	
	parteFracionaria = modf(numero, &intpart);
	
	printf("Parte inteira deste n�mero: %.2f \n", intpart);
	printf("Parte Fracion�ria deste n�mero: %.2f \n", parteFracionaria);
	printf("O arredondamento deste n�mero: %.2f \n", ceil(numero));
	
	getch();
}
/*
42. Elabore um algoritmo que receba um n�mero real, calcule e mostre:
a. A parte inteira desse n�mero
b. A parte fracion�ria desse n�mero
c. O arredondamento desse n�mero
*/
