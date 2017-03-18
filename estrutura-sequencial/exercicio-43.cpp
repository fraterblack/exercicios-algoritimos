#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float hora, parteFracionaria, totalMinutos;
    double intpart;

    
    printf("Informe a hora: ");
	scanf("%f", &hora);

	parteFracionaria = modf(hora, &intpart);
	totalMinutos = ((intpart * 60) + (parteFracionaria * 100));
	
	printf("A hora informada possui %.f minutos \n", totalMinutos);
	
	getch();
}
/*
43. Elabore um algoritmo de receba uma hora formada por hora e minutos (um numero real), 
calcule e mostre a hora digitada apenas em minutos. Lembre-se que:
- Para quatro e meia, deve-se digitar 4.30
- Os minutos vao de 0 a 60
*/
