#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, c;
	
	printf("Insira o valor A: ");
	scanf("%f", &a);
	
	printf("Insira o valor B: ");
	scanf("%f", &b);
	
	printf("Insira o valor C: ");
	scanf("%f", &c);
	
	if(a == b && a == c) {
		printf("Tipo de triângulo: Eqüilátero.");
	} else if((a == b && a != c) || (a == c && c != b) || (b == c && b != a)) {
		printf("Tipo de Triângulo: Isósceles.");
	} else if(a != b && b != c){
		printf("Tipo de Triângulo: Escaleno.");
	}
	
	getch();
}
/*
24. Elabore um algoritmo que leia tres valores, e verifique se eles podem ser os comprimentos dos lados de um triangulo, e se forem, dizer o tipo de triangulo.
Obs: Para ser um triangulo e necessario que, para cada um dos lados, que cada um dos lados seja menor que a soma dos outros dois lados, ou seja (A<B+C) (B<A+C) (C<A+B)
Os 3 tipos de triangulos sao:
- Equilatero: e aquele que tem os tres lados iguais. (A=B=C)
- Isosceles: e aquele que tem dois lados iguais. (A=B) (A=C) (B=C)
- Escaleno: e aquele que tem todos os lados diferentes (A‚B‚C)
*/
