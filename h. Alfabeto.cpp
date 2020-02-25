#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
char abc[27]={'a','b ','c ','d ','e ','f ','g ','h ','i ','j ','k ','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};

main()
{
int x;
char letra;

cout<<"El alfabeto queda:"<<endl;
for(x=26;x>=0;x--)
{
	
cout<<abc[x];

}
getch();
}

