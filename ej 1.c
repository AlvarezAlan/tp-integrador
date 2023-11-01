//ejercicio 1 
#include <stdio.h>

int main() {
	int calificaciones[5][4];
	float promedios[4] = {0};
	char aspectos[4][50] = {"Atencion de parte de los empleados", "Calidad de la comida", "Justicia del precio", "Ambiente"};
	
	for (int i = 0; i < 5; i++) {
		printf("Cliente %d:\n", i + 1);
		for (int j = 0; j < 4; j++) {
			printf("Calificacion del aspecto %d (1-10): ", j + 1);
			scanf("%d", &calificaciones[i][j]);
			promedios[j] += calificaciones[i][j];
		}
	}
	
	for (int j = 0; j < 4; j++) {
		promedios[j] /= 5;
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (promedios[i] < promedios[j]) {
				float temp = promedios[i];
				promedios[i] = promedios[j];
				promedios[j] = temp;
				char aspecto_temp[50];
				for ( int k = 0; k < 50; k++){
				(aspecto_temp, aspectos[i][k]);
				(aspectos[i], aspectos[j][k]);
				(aspectos[j], aspecto_temp[k]);
			}
		}
	}
}
	printf("\aspectos ordenados de mejor calificado a peor calificado:\n");
	for (int i = 0; i < 4; i++) {
		printf("%s: %.2f\n", aspectos[i], promedios[i]);
	}
	
	return 0;
}
