#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
int main()
{
	//declaracion de variables
	int bb_t1,bb_t2,bb_ed;
	//insercion de datos
	cout<<"Ingrese el año actual";
	cin>>bb_t1;
	cout<<"Ingrese su año de nacimiento";
	cin>>bb_t2;
	//calculo de edad
	bb_ed=bb_t1-bb_t2;
	//resultado
	cout<<"Su edad es:"bb_ed;
}