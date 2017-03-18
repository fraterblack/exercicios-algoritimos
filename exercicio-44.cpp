#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int hora, minutos, totalMinutos;
    
    printf("Informe a hora: ");
	scanf("%d", &hora);
	
	printf("Informe os minutos: ");
	scanf("%d", &minutos);
	
	printf("A hora digita (%d), equivale a %d minutos  \n", hora, (hora * 60));
	totalMinutos =  (hora * 60 + minutos);
	printf("(%d:%d) equivale a %d minutos \n", hora, minutos, totalMinutos);
	printf("O total de minutos (%d) equivale a %d segundos  \n", totalMinutos, (totalMinutos * 60));
	
	getch();
}
/*
44. Elabore um algoritmo que receba uma hora (utilize uma variável para hora e outra para minutos), calcule e mostre:
a. A hora digitada convertida em minutos
b. O total dos minutos, ou seja, os minutos informados mais a conversão anterior
c. O total dos minutos convertidos em segundos
*/
