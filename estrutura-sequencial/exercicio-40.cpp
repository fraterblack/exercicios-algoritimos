#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioMinimo, salario;

    
    printf("Informe o valor do sal�rio m�nimo vigente (R$): ");
	scanf("%f", &salarioMinimo);
	
	printf("Informe o valor do seu sal�rio (R$): ");
	scanf("%f", &salario);
	
	printf("Voc� recebe  %.2f sal�rio(s) m�nimo(s) \n", (salario / salarioMinimo));
	
	getch();
}
/*
40. Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. 
Elabore um algoritmo que leia o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa. 
Calcular e imprimir quantos sal�rios m�nimos essa pessoa ganha.
*/
