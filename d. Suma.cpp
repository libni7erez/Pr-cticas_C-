#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n, s, r, t, acum, i;
	cout<<"Ingrese Numero"<<endl;
	cin>>n;
	acum=0;
	i=0;
	for (i=1;i<=n;i++)
	{
		n=n;
	acum=acum+1;
	if(i%2==0)
	{
	r=i/(n- (i - 1));
	}
	else
	s=i/(n+(i+1));
	
	acum=acum+1;
}
t=s-r;
cout<<"La suma de la forma 1/n-2/n-1+3/n+2-4/n+5/n...n/1 es:"<<t<<endl;
getch();

}

