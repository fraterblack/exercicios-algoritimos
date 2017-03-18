#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float baseMaior, baseMenor, altura;
    
    printf("Informe a base maior do trapézio: ");
	scanf("%f", &baseMaior);
	
	printf("Informe a base menor do trapézio: ");
	scanf("%f", &baseMenor);
	
	printf("Informe a altura do trapézio: ");
	scanf("%f", &altura);
	
	printf("A área do trapézio é de %.2f", (((baseMaior + baseMenor) * altura) / 2));
	
	getch();
}
/*
28. Elabore um algoritmo que calcule e mostre a área de um trapézio.
Sabe-se que: Área do trapézio = ((base maior + base menor) * altura)/2
*/
