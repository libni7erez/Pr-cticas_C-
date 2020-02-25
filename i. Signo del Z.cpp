/*Programa que da a conocer segun tu Zodiaco , como te ira en el amor*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	/*Los Zodiacos son*/
	
int n;
cout<<" SIGNOS DEL ZODIACO ";
cout<<"\n--------------------------------";
cout<<"\n ARIES        | 1 ";
cout<<"\n TAURO        | 2 ";
cout<<"\n GEMINIS      | 3 ";
cout<<"\n CANCER       | 4 ";
cout<<"\n LEO          | 5 ";
cout<<"\n VIRGO        | 6 ";
cout<<"\n LIBRA        | 7 ";
cout<<"\n ESCORPIO     | 8 ";
cout<<"\n SEGITARIO    | 9 ";
cout<<"\n CAPRICORNIO  | 10 ";
cout<<"\n ACUARIO      | 11 ";
cout<<"\n PISCIS       | 12 "<<endl;
cout<<endl;
cout<<"Escriba el numero segun tu zodiaco: "<<endl;
cin>>n;

/*Segun  lo que elija el Usuario*/

if (n==1)
{
cout<<"   -------------------------------- ARIES -----------------------------------  "<<endl;
cout<<"   -------=--------------- Que te depara en el amor -------------------------  "<<endl<<endl;
cout<<"\Se enamorará y se desenamorará de manera instantánea. Ejercerá una poderosa atracción sobre el sexo opuesto y se entregará de manera incondicional, si el amor que le profesa a su pareja es verdadero. Expresará su sexualidad con más intensidad y fuerza en comparación con los otros signos del zodíaco.";
}
if (n==2)
{
cout<<"   -------------------------------- TAURO -----------------------------------  "<<endl;
cout<<"   ---------------------- Que te depara en el amor --------------------------"<<endl;
cout<<"Gracias a la influencia de Venus, astro que representa el amor, el arte y la belleza; sus sentimientos serán profundos y estables. Lo más importante en su vida será el amor, lo cual le proporcionará felicidad y lo hará sentirse realizado de verdad. Aunque actuará de manera orgullosa, deseará compartir su vida con una persona fiel, afectuosa y respetuosa.";
}
if (n==3)
{
cout<< "   ------------------------------- GEMINIS ---------------------------------  "<<endl;
cout<< "   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<< "No conocerá el término fidelidad, ya que lo asimilará como sinónimo de aburrimiento. Sin embargo, aunque su libertad será algo muy importante y no estará dispuesto a renunciar a ella de manera fácil, lo hará si encuentra a una persona demasiado valiosa";
}

if (n==4)
{
cout<<"   ------------------------------- CANCER ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El romanticismo y la sensibilidad, que le caracterizan, harán del amor un sentimiento vital para su existencia. Deseará encontrar esa alma gemela que le ofrezca comprensión, compañía y apoyo incondicional. Existen dos tipos de Cáncer, el que atrae con facilidad al sexo opuesto o el que se sume en la más profunda soledad.";
}
if (n==5)
{
cout<<"   --------------------------------  LEO  -----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Es estable, organizado y necesita recibir por parte de su pareja el asidero y el apoyo que le permita avanzar y salir adelante, por esa razón aunque tiende a ser individualista, difícilmente se ve un Leo solitario. Pretenderá dominar a su pareja, lo cual lo hará sentirse seguro del otro.";
}
if (n==6)
{
cout<<"   -------------------------------- VIRGO -----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<"\nVirgo es el signo menos apasionado de todo el zodíaco. La idea de ser presa de sus instintos y deseos le ocasionará temor y creerá que enamorarse, en el mejor de los casos, sólo le traerá dolores de cabeza. Intentará, pase lo que pase, controlar sus sentimientos y racionalizará el término amor.";
}
if (n==7)
{
cout<<"   -------------------------------- LIBRA ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" La naturaleza enamoradiza y no muy estable que le caracteriza, dará pie al surgimiento de muchas alianzas en el curso de su vida y siempre estará a la espera de la persona perfecta o ideal para entregarse sin restricciones.";
}
if (n==8)
{
cout<<"   ----------------------------- ESCORPION ---------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El amor será un motivo para vivir o morir. Poseerá gran simpatía en el amor, especialmente, por las personas con las que difiere en edad. Aunque los lazos que establezca serán sólidos y duraderos, estará expuesto a pasar por temporadas, en las que se generarán brechas enormes.";
}
if (n==9)
{
cout<<"   ----------------------------- SA GITARIO --------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Será propenso a sentir rápidamente las llamas y la ilusión del enamoramiento. Es proclive a las decepciones y a las frustraciones sentimentales; sin embargo, no se dejará abatir y se lanzará de cabeza a nuevas experiencias. La vida le ofrecerá demasiadas maravillas para limitarse a una sola persona, lo que le impedirá vivir cada uno de sus romances a plenitud.";
}
if (n==10)
{
cout<<"   ---------------------------- CAPRICORNIO --------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Por muy enamorado que esté, siempre mantendrá los pies sobre la tierra y es difícil que caiga en actitudes románticas o se implique verdaderamente en una relación; sin embargo, el día que abra la puerta de su corazón a un nuevo sentimiento, será muy difícil que rompa esa unión.";
}
if (n==11)
{
cout<<"   ------------------------------- ACUARIO ---------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Sus relaciones sentimentales se moverán en el laberinto de lo impredecible. Aparte de su originalidad, Acuario siempre reservará algo de su personalidad para sí mismo, de esta manera tratará de conservar su intimidad. Las ataduras de cualquier tipo, lo harán sentir incómodo y no soportará ninguna clase de presión. Sin embargo, aunque puede ser fiel y mantener una relación estable, jamás renunciará a su idea de independencia.";
}
if (n==12)
{
cout<<"   ------------------------------- PISCIS ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El manejo del amor abarca gran parte de su vida, ya que cuando se enamora, se entrega por completo y cree que la persona que ha encontrado es la mejor del mundo lo que como es obvio le ocasionará múltiples sinsabores. Sin embargo, esto no significa que se pueda volver a enamorar de otra persona con la misma intensidad.";
}
system ("PAUSE");
getch();

}

