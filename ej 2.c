#include <stdio.h>
int main() {
	int filas = 3;
	int columnas = 5;
	int matriz[3][5];
	int sumaFilas[3];
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
	
	(matriz, sumaFilas);
	
	for (int i = 0; i < filas; i++) {
		printf("%d\n", sumaFilas[i]);
	}
	
	return 0;
}
