/*Nombre del programa: Fibonacci.CPP
Autor: Mendoza Palacios Alfredo
Version: 1
*/ 

using namespace std;

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <climits>
#include <float.h>
#include <stdlib.h>

void Leer(long int &N);
void Imprimir_sin(long int N);

void ImprimirRecur(long int N);
long int SucesionFor(long int N);
long int Recursividad(long int N);
//fin de prototipos

int main(void)
{	system("cls");

	long int N;
	
	int  opc;
	
	do
	{
		system("cls");
	cout << "Por cual metodo deseas resolver la sucecion de Fibonacci : " << endl;
	cout << "1- Recursividad"<< endl;
	cout << "2- Sin recursividad "<< endl;
	cout << "3- Salir "<< endl;
	cout << "elige la opcion: ";
	cin >> opc;
	
	
	switch (opc)
	{
	
		case 1:
			Leer(N);
			ImprimirRecur(N);
				system("pause");
		break;
		case 2: 
			Leer(N);
			Imprimir_sin(N);
				system("pause");
		break;
		
		case 3:
			exit(0);
		break;
		
		default:
			cout << "numero incorrecto escoge de nuevo " << endl;
			system("pause");
			break;

	}
		
	}while(opc !=3);
		
		
	

	system("pause");
	return 0;	
}//Fin del main

void Leer(long int &N)
{	
	
	cout << "Dame el numero para la sucesion de Fibonacci"<< endl;
	cin >> N;
	cout << endl;
	
	
	cout << endl << endl;
}//Fin de leer()

void ImprimirRecur(long int N)
{	cout  << "sucecion: " << endl;
	for(int i=0; i<N ;i++)
	{
		cout << Recursividad(i) << " ";
	}
}// Fin de Imprimir con recursividad()

void Imprimir_sin(long int N)
{	
	cout  << "sucecion: " << endl;
	for(int i=0; i<N ;i++)
	{
		cout << SucesionFor(i) << " ";
	}
	
	
}// Fin de Imprimir sin recursividad()


long int SucesionFor(long int N)
{
	long int F0=0;
	long int F1=1;
	long int F=0;
	
	if(N <= 0 || N == 1){
	return N;
	}
	else{
	
	for(long int i=2;i<=N;i++){
		F=F0+F1;
		F0=F1;
		F1=F;
	}
	}
	return F;
}//Fin de Sucesion()

long int Recursividad(long int N)
{	
	if(N <= 0 || N ==1)
	return N;
	else{
	return Recursividad(N-2)+ Recursividad(N-1); 
	}
	
}//Fin de recursividad()
