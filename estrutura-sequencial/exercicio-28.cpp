#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float baseMaior, baseMenor, altura;
    
    printf("Informe a base maior do trap�zio: ");
	scanf("%f", &baseMaior);
	
	printf("Informe a base menor do trap�zio: ");
	scanf("%f", &baseMenor);
	
	printf("Informe a altura do trap�zio: ");
	scanf("%f", &altura);
	
	printf("A �rea do trap�zio � de %.2f", (((baseMaior + baseMenor) * altura) / 2));
	
	getch();
}
/*
28. Elabore um algoritmo que calcule e mostre a �rea de um trap�zio.
Sabe-se que: �rea do trap�zio = ((base maior + base menor) * altura)/2
*/
