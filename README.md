# Practica_12


<h2 align="center"> ARRAYS </h2> <br>

### EJERCICIO 1

---

<h3 align="center"> Resolviendo </h3> <br>


#### Diagrama_de_flujo_1
> ${\color{TealBlue}\mbox{Flujograma  (funcion principal)}}$
<p align="center">
  <img   src="P12_E1/P12_E1_D00.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (N terminos)}}$
<p align="center">
  <img   src="P12_E1/P12_E1_D01.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (Factorial)}}$
<p align="center">
  <img   src="P12_E1/P12_E1_D02.jpg">
</p>

#### Codificacion_en_C_1


>
```C
// Librerias
#include<stdio.h>
#include<conio.h>
// Declaracion de funiones
void Llenar_vector(int);
float Promedio(int);
// Declaracion de variables globales
float V_Temp[20];
main(){
	// Declracion de varaibles locales
	int cant;
	float R;
	// Enunciado
	printf("\n\t     * Media aritmetica *");
	printf("\n\n\t Ingrese la cantidad de valores");
	printf("\n\t que desea ingresar (max 20):");
	// Peticion de nro de elementos
	printf("\n\t\t n = ");
	scanf("%d",&cant);
	// condicional para evitar el desborde maximo
	if(cant<=20){
		printf("\n\t Ingresar los valores:\n\n");
		Llenar_vector(cant);// F. para llenar datos
		R = Promedio(cant);// F. de calculos
		printf("\n\t Promedio = %4.3f",R);
	}else{
		printf("\n\t El valor ingresado es invalido.");
	}
	printf("\n\n\t Terminando programa...");
	getch();
}
// Funcion para llenar los datos
void Llenar_vector(int n){
	int i;
	for( i=0;i<n;i++ ){
		printf("\t A[%d] = ",i);
		scanf("%f",&V_Temp[i]);
	}
}
// Funcion para calcular el proemdio
float Promedio(int n){
	int i;
	float Suma = 0, Prom;
	for( i=0;i<n;i++ ){
		Suma += V_Temp[i];
	}
	Prom = Suma/n;
	return Prom;
}
```

#### Ejecucion 1


> ${\color{TealBlue}\mbox{Prueba 1  (  raiz cubica de : 1.1  )}}$




---
#### Enunciado_2


<h3 align="center"> Resolviendo </h3> <br>

#### Diagrama_de_flujo_1

> ${\color{TealBlue}\mbox{Flujograma  (funcion principal)}}$
<p align="center">
  <img   src="P12_E2/P12_E2_D00.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (comprobando datos)}}$
<p align="center">
  <img   src="P12_E2/P12_E2_D01.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (Sumatoria)}}$
<p align="center">
  <img   src="P12_E2/P12_E2_D02.jpg">
</p>


#### Codificacion_en_C_2

>${\color{TealBlue}\mbox{Funcion principal}}$

```C
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
```

#### Ejecucion_2

---
#### Enunciado_3

---

<h3 align="center"> Resolviendo </h3> <br>

#### Diagrama_de_flujo_3

> ${\color{TealBlue}\mbox{Flujograma  (funcion principal)}}$
<p align="center">
  <img   src="P12_E3/P12_E3_D00.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (Terminos)}}$
<p align="center">
  <img   src="P12_E3/P12_E3_D01.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (termino n simo)}}$
<p align="center">
  <img   src="P12_E3/P12_E3_D02.jpg">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (termino n simo)}}$
<p align="center">
  <img   src="P12_E3/P12_E3_D03.jpg">
</p>

#### Codificacion_en_C_3

```C
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
```




#### Ejecucion_3



