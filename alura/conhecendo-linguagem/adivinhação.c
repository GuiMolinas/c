#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int palpite =0;
	int comp = rand() % 11;
	int chutes = 0;
	
	printf("Jogo da Adivinhação\n");
	printf("==================================================\n");
	printf("Estou pensando em um número de 0 a 10. Insira seu palpite\n");
	
	do {
		printf("Palpite: ");
		scanf("%d", &palpite);	
		printf("==================================================\n");
		if(palpite != comp) {
			printf("Você errou! Tente novamente\n");
			if(palpite > comp){
				printf("Seu chute foi maior que meu número\n");
			}
			else {
				printf("Sua chute é menor que meu número\n");
			}
		}
		chutes++;
	} while(palpite != comp);
	
	printf("Parabéns! Você acertou!\n");
	printf("Tentativas: %d", chutes);

}
