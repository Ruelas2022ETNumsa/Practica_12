#include<stdio.h>

void Enunciado();
void Pascal(int cant);
void Mostrar(int);

int P[100][100], cant;


main(){	
	Enunciado();
	scanf("%d",&cant);
	
	if(cant<=100){
		Pascal(cant);
		Mostrar(cant);	
	}else{
		printf("\n\n\t Valor invalido.");
	}
	printf("\n\n\t Terminando programa...");
}

void Pascal(int cant){
	int i,j;
	for(i=0;i<cant;i++) {
		for(j=0;j<cant;j++) {
			if(j==0 || i==j)
				P[i][j]=1;
			else if(i<j)
				P[i][j]=0;
			else
				P[i][j]=P[i-1][j]+P[i-1][j-1];
		}
	}
}

void Mostrar(int cant){
	int i,j;
	for(i=0;i<cant;i++) {
		for(j=cant-1;j>=0;j--) {
			if(P[i][j]!=0){
				printf("\t%d",P[i][j]);	
			}else{
				printf("\t");	
			}
		}
		printf("\n");
	}	
}

void Enunciado(){
	printf("\n\t * Triangulo de pascal *");
	printf("\n\n\t Sea el triangulo de pascal");
	printf("\n\t ingresar el nro de filas");
	printf("\n\t que desea imprimir (max 100):");
	printf("\n\n\t\t n = ");	
}
