#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtd=0, qtdA=0;
	char ch;
	
	do{
		
		fflush(stdin); // fflush � uma fun��o para limpar o buffer do teclado
		
		printf("Digite: ");
		scanf("%c", &ch);
		
		if(ch != '*'){	
		
			qtd++;
			
			if(ch == 'a'){
				qtdA++;
			}
		}
						
	}while(ch != '*');
	
	printf("Quantidade Sequ�ncia de Entrada = %d\n", qtd);
	printf("Quantidade de ocorr�ncias da letra 'A' = %d\n", qtdA);
	
	return 0;
}
