#include<stdio.h>
#include<conio.h>

void Enunciado();
void F_Matriz();
void Mostrar_M();

int M[10][10];

main(){
	Enunciado();
	F_Matriz();
	getch();
	Mostrar_M();
	printf("\n\n\t Terminando programa...");
	getch();
}

void Mostrar_M(){
	int i, j;
	for(i=0;i<10;i++){
		printf("\t [");
		for(j=0;j<10;j++){
			if(M[i][j]<10)
				printf("    %d",M[i][j]);
			else if(M[i][j]<100)
				printf("   %d",M[i][j]);
			else
				printf("  %d",M[i][j]);
		}
		printf("  ]\n");
	}		
}

void F_Matriz(){
	int i, j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(  (i+j)%2==0  )
				M[i][j]=(i+j)*(i+j);
			else
				M[i][j]=(i+j);
		}
	}
}

void Enunciado(){
	printf("\n\t Sea una matriz de 10x10");
	printf("\n\t iniciando en (0,0).\n");
	printf("\n\t donde i = filas");
	printf("\n\t       j = columnas\n");
	printf("\n\t Si i+j es par, A_(i,j)=(i+j)^2");
	printf("\n\t Si i+j es impar, A_(i,j)=i+j");
	printf("\n\n\n");
}
