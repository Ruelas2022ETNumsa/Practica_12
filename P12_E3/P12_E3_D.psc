Algoritmo P12_E3_D
	Enunciado();
	Leer cant;
	Pascal(cant);
	Mostrare(cant);
	Escribir " Terminando programa...";
FinAlgoritmo
Funcion Enunciado 
	escribir("* Triangulo de pascal *");
	escribir(" Sea el triangulo de pascal");
	escribir(" ingresar el nro de filas");
	escribir(" que desea imprimir (max 100):");
	escribir(" n = ");
FinFuncion

Funcion Pascal(n)
	Dimension P[100,100];
	Para i<-0 Hasta n Con Paso 1 Hacer
		Para j<-0 Hasta n Con Paso 1 Hacer
			Si j==0 || i==j Entonces
				P[i,j]<-1;
			SiNo
				Si i<j Entonces
					P[i,j]<-0;
				SiNo
					P[i,j]<-P[i-1,j]+P[i-1,j-1];
				Fin Si
			Fin Si
		Fin Para
	Fin Para
FinFuncion

Funcion Mostrare(n)
	Dimension P[100,100];
	Para i<-0 Hasta n Con Paso 1 Hacer
		Para j<-n-1 Hasta 0 Con Paso -1 Hacer
			Si P[i,j]<>0 Entonces
				Escribir " ",P[i,j];
			SiNo
				Escribir " ";
			Fin Si
		Fin Para
		Escribir "";
	Fin Para
FinFuncion