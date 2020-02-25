#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Ingrese valor"<<endl;
	cin>>n;
	if(n>1)
	{
		while(n !=1)
		{
			if((n%2)==0)
			{
				n=n/2;
				cout<<"Valor: "<<n<<endl;
			}
			else
			{
				n=(n*3)+1;
				cout<<"Valor: "<<n<<endl;
			}
		}
		cout<<"EL Proceso a llegado a 1"<<endl;
	}
	system ("PAUSE");
	getch;
	return 0;
}
