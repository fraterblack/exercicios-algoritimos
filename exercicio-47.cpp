#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float alturaDegrau, alturaNecessaria, consumoGato2, restantePacote;
    
    printf("Informe a altura do degrau (cent�metros): ");
	scanf("%f", &alturaDegrau);
	
	printf("Informe a altura que deseja alcan�ar(metros): ");
	scanf("%f", &alturaNecessaria);
	
	alturaNecessaria = alturaNecessaria * 100;
	
	printf("Voc� dever� subir %.f degraus para alcan�ar o objetivo \n", ceil(alturaNecessaria / alturaDegrau));
	
	getch();
}
/*
47. Cada degrau de uma escada tem X de altura. 
Elabore um algoritmo que receba essa altura, e uma altura que o usu�rio deseja alcan�ar subindo a escada. 
Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.
*/
