#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
int N1,i,N2,x;
cout<<" CONDICION DEL JUEGO:"<<endl;
cout<<" -El numero ingresado debe de estar en un rango de 1 a 50."<<endl;
cout<<" -El jugador 1 debe ingresar un numero y el jugador 2 debe adivinarlo."<<endl;
cout<<" -El jugador 2 tiene 3 oportunidades para acertar."<<endl<<endl;
cout<<" Precione enter para iniciar el juego."<<endl<<endl;
cout<<"INICIAR JUEGO..."<<endl<<endl;
getche();

cout<<" JUGADOR 1"<<endl;
cout<<" Introduzca un numero: "<<endl;
cin>>N1;
cout<<"\nJUGADOR 2"<<endl;
cout<<"\nIntroduzca un numero:"<<endl;
for(i=1;i<=5;i++)
{
cout<<" Oportunidad : "<<i<<endl<<endl;
cin>>N2;
if (N2==N1)
{
cout<<" Ganaste "<<endl;
cout<<"El numero oculto es:"<<N1<<endl;
break;
}
if (N2>N1)
{
cout<<" El numero es menor."<<endl;
}
else{
cout<<" El numero es mayor."<<endl;
}
cout<<"Perdiste"<<endl;
cout<<"El numero coculto es:"<<N1<<endl;
}
cout<<" FIN DEL JUEGO "<<endl;

getch();
}

