#include<stdio.h>
#include<stdlib.h>

//Função para criar matriz com alocação dinâmica

int **criaMatriz (int linhas, int colunas){
	int ** matriz = (int**) malloc(linhas * sizeof(int*));
	int index;
	for (index = 0; index < linhas; index++){
		matriz[index] = (int*) malloc (colunas * sizeof(int));
	}
	return matriz;

}



int main (){
	//Alocando uma matriz
	int linhas = 2, colunas = 2;
	
	int ** matriz = criaMatriz (linhas, colunas);
	
	//Preenchendo a Matriz
	
	int i, j;
	
	printf("Digite os valores para Matriz: \n");
	
	for(i = 0; i < linhas; i++){
		for(j=0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
		for(i = 0; i < linhas; i++){
			for(j=0; j < colunas; j++){
				printf("%d\t", matriz[i][j]);
		}
	}
	
return 0;	
}
