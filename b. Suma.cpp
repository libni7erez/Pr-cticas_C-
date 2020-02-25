#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int p2, p3, q2, q3, r2, r3, p, q, r, s, t, y, z;
int c, con, i, n;
int main ()
{
 cout<<"Ingrese Numero Mayor a cero que desea operar"<<endl;
 cin>>n;
 r=0;
 q=0;
 c=0;
 for(i=1;i<=n;i++)
 {
  n=n;
  con=con+1;
  if(i%2==0)
  {
  p=1;
  p2=p/(n-c);
  }
  else
  q=1;
  q2=q/(n-c);
  c=c+1;
 }
 s=s+q2-p2;
 cout<<"La suma de los numeros de la forma 1-1/2+1/3-1/4+....1/N es: "<<s<<endl;
 system ("PAUSE");
 getch();
}
