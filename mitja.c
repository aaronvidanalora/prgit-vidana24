#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("Vidana24 Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vidana24 Vols continuar (s/n): ");
		scanf(" %s",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("Vidana24 La mitja és: %.2f\n",mitja);	
	return 0;
}

