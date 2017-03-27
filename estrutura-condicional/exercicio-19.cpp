#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int anoAtual, anoNascimento;
    
    printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	printf("Informe o ano nascimento: ");
	scanf("%d", &anoNascimento);
	
	if (anoAtual < anoNascimento) {
		printf("O ano de nascimento é inválido");
	} else {
		printf("A pessoa possui %d anos", (anoAtual - anoNascimento));
	}
	
	getch();
}
/*
19. Elabore um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual. 
Ao final, imprima a idade da pessoa. Não se esqueça de verificar se o ano de nascimento é um ano válido.
*/
