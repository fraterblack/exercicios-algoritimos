#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salario, aumento, media;
    
    printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	
	printf("Informe o percentual de aumento: ");
	scanf("%f", &aumento);
	
	printf("O novo sal�rio do funcion�rio �: %.2f", (salario + (salario * (aumento / 100))));
	
	getch();
}

/*
21. Elabore um algoritmo que leia o sal�rio de um funcion�rio, o percentual de aumento, e, ao final,
calcule e mostre o valor do aumento, e o novo sal�rio.
*/
