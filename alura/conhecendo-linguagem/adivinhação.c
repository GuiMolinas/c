#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int palpite =0;
	int comp = rand() % 11;
	int chutes = 0;
	
	printf("Jogo da Adivinha��o\n");
	printf("==================================================\n");
	printf("Estou pensando em um n�mero de 0 a 10. Insira seu palpite\n");
	
	do {
		printf("Palpite: ");
		scanf("%d", &palpite);	
		printf("==================================================\n");
		if(palpite != comp) {
			printf("Voc� errou! Tente novamente\n");
			if(palpite > comp){
				printf("Seu chute foi maior que meu n�mero\n");
			}
			else {
				printf("Sua chute � menor que meu n�mero\n");
			}
		}
		chutes++;
	} while(palpite != comp);
	
	printf("Parab�ns! Voc� acertou!\n");
	printf("Tentativas: %d", chutes);

}
