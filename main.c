#include <stdio.h>
#include "ponto.h"

int main(){
	Ponto *meuPonto1;
	Ponto *meuPonto2;

	meuPonto1= cria(0.0, 0.0);
	meuPonto2= cria(2.0, 1.0);

	float dist = distancia(meuPonto1, meuPonto2);
	printf("Distancia entre os dois pontos %.2f\n", dist);

	float x,y;
	acessa(meuPonto1, &x, &y);
	printf("Ponto 1 (%.1f, %.1f)\n", x, y);

	
	atribui(meuPonto2 ,2.0, 2.0);
	acessa(meuPonto2, &x, &y);
	printf("Ponto 2 (%.1f, %.1f)\n", x, y);

	return 0; 
}
