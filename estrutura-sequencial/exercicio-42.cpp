#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float numero, parteFracionaria;
    double intpart;

    
    printf("Informe um número real: ");
	scanf("%f", &numero);
	
	parteFracionaria = modf(numero, &intpart);
	
	printf("Parte inteira deste número: %.2f \n", intpart);
	printf("Parte Fracionária deste número: %.2f \n", parteFracionaria);
	printf("O arredondamento deste número: %.2f \n", ceil(numero));
	
	getch();
}
/*
42. Elabore um algoritmo que receba um número real, calcule e mostre:
a. A parte inteira desse número
b. A parte fracionária desse número
c. O arredondamento desse número
*/
