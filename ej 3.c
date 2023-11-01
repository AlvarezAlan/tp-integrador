#include <stdio.h>
#include <stdlib.h>

#define max_dimension 100

void sumaMatriz(int filas, int columnas, int matrizA[][max_dimension],int matrizB[][max_dimension],int matrizResultado[][max_dimension]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matrizResultado[i][j]=matrizA[i][j]+matrizB[i][j];
		}
	}
}

void traspuestaMatriz(int filas, int columnas, int matriz[][max_dimension], int matrizTraspuesta[][max_dimension]){
	for(int i=0;i<columnas;i++){
		for(int j=0;j<filas;j++){
			matrizTraspuesta[i][j]=matriz[i][j];
		}
	}
}

int calcularTraza(int dimension, int matriz[][max_dimension]){
	int traza=0;
	for(int i=0;i<dimension;i++){
		traza+=matriz[i][i];
	}
	return traza;
}

int main(){
	int filas,columnas;
	int matrizA[max_dimension][max_dimension];
	int matrizB[max_dimension][max_dimension];
	printf("Ingrese el numero de filas de las matrices: ");
	scanf("%d",&filas);
	printf("Ingrese el numero de columnas de las matrices: ");
	scanf("%d",&columnas);
	printf("Ingresar valor de la matriz A: \n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("Matriz A[%d]][%d]: ",i,j);
			scanf("%d",&matrizA[i][j]);
		}
	}
	printf("Ingresar valor de la matriz B: \n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("Matriz B[%d]][%d]: ",i,j);
			scanf("%d",&matrizB[i][j]);
		}
	}
	int matrizResulSuma[max_dimension][max_dimension];
	sumaMatriz(filas,columnas,matrizA,matrizB,matrizResulSuma);
	int matrizTrasA[max_dimension][max_dimension];
	traspuestaMatriz(filas,columnas,matrizA,matrizTrasA);
	int traza=calcularTraza(filas,matrizA);
	printf("\nMatriz resultante de la suma\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%d",matrizResulSuma[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz resultante de la traspuesta\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%d",matrizTrasA[i][j]);
		}
		printf("\n");
	}
	printf("\nLa traza de la matriz A es: %d\n",traza);
	
	system("pause");
	return 0;
}
