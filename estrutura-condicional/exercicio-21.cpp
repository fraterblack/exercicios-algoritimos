#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[40];
    float altura, peso, imc;
    
    printf("Informe o nome: ");
	gets(nome);
	fflush(stdin);
	
    printf("Informe a altura (metros): ");
	scanf("%f", &altura);
	
	printf("Informe o peso (kg): ");
	scanf("%f", &peso);
	
	imc = peso / pow(altura, 2);
	
	if (imc < 20) {
		printf("%s est� abaixo do peso", nome);
	} else if (imc >= 20 && imc <= 25) {
		printf("%s est� com o peso normal", nome);
	} else if (imc > 25 && imc <= 30) {
		printf("%s est� com excesso de peso", nome);
	} else if (imc > 30 && imc <= 35) {
		printf("%s est� obeso", nome);
	} else {
		printf("%s est� com obesidade m�rbida", nome);
	}
	
	getch();
}
/*
21. Um endocrinologista deseja controlar a sa�de de seus pacientes e, para isso, utiliza o �ndice de Massa Corporal (IMC). Sabendo que o IMC � calculado por meio da seguinte f�rmula:
IMC = peso / altura�
Onde:
- peso � dado em Kg
- altura � dada em metros
Elabore um algoritmo que leia o nome, o peso e a altura de um paciente, 
e apresente o nome do paciente e sua faixa de risco, baseando-se na seguinte tabela:
Abaixo de 20 = Abaixo do peso
A partir de 20 at� 25 = Normal
Acima de 25 at� 30  = Excesso de peso
Acima de 30 at� 35 = Obesidade
Acima de 35 = Obesida M�rbida
*/
