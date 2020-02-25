/*Programa que da a concer n Tabla de Multiplicacion*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	float n, r, i=1;
	cout<<"Ingrese numero de tabla que desea Saber"<<endl;
	cin>>n;
	
	if(n<=10){
		cout<<"La tabla del:  "<<n<<endl<<endl;
	for (i=1;i<=10;i++)
	{
	
	r=n*i;

	cout<<n<<" x "<<i<<" = "<<r<<endl;
}

}
else
{
	cout<<"La tabla del:  "<<n<<endl<<endl;
		for (i=1;i<=n;i++)
	{
		r=n*i;
		cout<<n<<" x "<<i<<" = "<<r<<endl;
	}
}
getch();
}
