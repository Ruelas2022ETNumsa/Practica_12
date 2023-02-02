Algoritmo P12_E1_D
	Escribir " * Media aritmetica * ";
	Escribir " Ingrese la cantidad de valores";
	Escribir " que desea ingresar (max 20): ";
	Escribir "          n = ";
	leer cant;
	Escribir " Ingresar los valores";
	Llenar_vector(cant);
	R <- Promedio(cant);
FinAlgoritmo
	
Funcion Llenar_vector(n)
	Dimension V[100];
	Para i<-0 Hasta n Con Paso 1 Hacer
		Escribir " A[ ",i,"] = ";
		leer V[i];
	Fin Para
FinFuncion

Funcion P<-Promedio(n)
	Dimension V[100];
	S = 0;
	Para i<-0 Hasta n Con Paso 1 Hacer
		S <- S+V[i];
	Fin Para
	P<- S/n;
FinFuncion