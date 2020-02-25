/*Programa que da a concer el Multiplo de un numero de Forma 1x2x3x4x.....n*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	float n,m=1;
	cout<<"Ingrese un Numero"<<endl;
	cin>>n;
	
	while (n>1)
	{
		m=m*n;
		n=n-1;
	
	}
		cout<<"El factorial es:"<<m<<endl;
	system ("PAUSE");
	getch();
}
