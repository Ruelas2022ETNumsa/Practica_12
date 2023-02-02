Algoritmo P12_E2_D
	Enunciado();
	F_matriz();
	Mostrar_M();
	Escribir " Terminando programa...";
FinAlgoritmo
Funcion Enunciado()
	Escribir " Sea una matriz de 10x10";
	Escribir " iniciando en (0,0).\n";
	Escribir " Si i+j es par, A_(i,j)=(i+j)^2";
	Escribir " Si i+j es impar, A_(i,j)=i+j";
FinFuncion
Funcion F_matriz()
	Dimension M[100,100];
	Para i<-0 Hasta 10 Con Paso 1 Hacer
		Para j<-0 Hasta 10 Con Paso 1 Hacer
			Si (i+j)%2==0 Entonces
				M[i,j]<-(i+j)*(i+j);
			SiNo
				M[i,j]<-(i+j);
			Fin Si
		Fin Para
	Fin Para
FinFuncion

Funcion Mostrar_M()
	Dimension M[100,100];
	Para i<-0 Hasta 10 Con Paso 1 Hacer
		Escribir "   [";
		Para j<-0 Hasta 10 Con Paso 1 Hacer
			Si M[i,j]<10 Entonces
				Escribir "   ",M[i,j],;
			SiNo
				Si M[i,j]<100 Entonces
					Escribir "  ",M[i,j],;
				SiNo
					Escribir " ",M[i,j],;
				Fin Si
			Fin Si
		Fin Para
		Escribir " ]";
	Fin Para
FinFuncion
	