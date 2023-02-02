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
