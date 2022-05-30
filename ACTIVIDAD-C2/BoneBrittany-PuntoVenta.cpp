#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
//funcion principal
int main()
{
	//declaracion de vriables
	float bb_n1,bb_n2,bb_n3,bb_iva,bb_st;
	//insercion de datos o productos
	cout<<"Ingrese el primer producto:";	
	cin>>bb_n1;
	cout<<"Ingrese el segundo producto:";
	cin>>bb_n2;
	cout<<"Ingrese el tercer producto:";
	cin>>bb_n3;
	//suma de la compra
	bb_s=bb_n1+bb_n2+bb_n3;
	//calculo de impuesto al valor agregado
	bb_iva=bb_s*0.12;
	//precio final
	bb_st=bb_s+bb_iva;
	cout<<"El total de su compra es:"bb_st;
	}