#include <stdio.h>
#include <locale.h>

float   matrizA[3][3];
float   matrizB[3][3];
float   resultado[3][3];

int    main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	
	
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			
			printf("Digite o valor que vai ficar na matriz A local [%u][%u]",i,j);
			scanf("%f",&matrizA[i][j]);
			
		}
	}
	
	printf("--------------------------------------------------------------------------------------------------\n");
	
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			
			printf("Digite o valor que vai ficar na matriz B local [%u][%u]",i,j);
			scanf("%f",&matrizB[i][j]);
			
		}
	}

	printf("--------------------------------------------------------------------------------------------------\n");	
	printf("Que tipo de conta deseja ser feita com as matrizes\n");
	printf("1º  Soma                                          \n");
	printf("2º  Subtração                                     \n");
	printf("3º  Multiplicação                                 \n");
	printf("4º  Divisão                                       \n");
	scanf("%u",&escolha);
	
	switch(escolha){
		case 1: 
		 	
			 for(int i=1;i<4;i++){
				for(int j=1;j<4;j++){
			
					resultado[i][j] = matrizA[i][j] + matrizB[i][j];
			
				}
			}
			break;

			
		
		
		
		
	}
	printf("--------------------------------------------------------------------------------------------------\n");
	printf("                  Resultado da conta :  \n");
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			
			printf("O valor resultante do local [%u][%u] foi de: %f\n",i,j,resultado[i][j]);
	
		}
	}
	
	
	return 0;
}
