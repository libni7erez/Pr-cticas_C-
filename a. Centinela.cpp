#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	double i=0;
	int n=0;
	int p =0;
	int s=0;
	while (n!=9999)
	{
		cout<< "Ingrese un Numero Entero Impar"<<endl;
		cin>>n;
		if (n!=9999)
		{
			if ((n%2)!=0)
			{
			
				s=s+n;
				i=i+1;
			}
			else
			{
			
			cout<<"El programa solo acepta Numeros Impares"<<endl;
		}
		
		}
		p=s/1;
		cout<<"El promedio es:"<<p<<endl;
	
	}
getch ();	
}
