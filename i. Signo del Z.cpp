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
cout<<"\Se enamorar� y se desenamorar� de manera instant�nea. Ejercer� una poderosa atracci�n sobre el sexo opuesto y se entregar� de manera incondicional, si el amor que le profesa a su pareja es verdadero. Expresar� su sexualidad con m�s intensidad y fuerza en comparaci�n con los otros signos del zod�aco.";
}
if (n==2)
{
cout<<"   -------------------------------- TAURO -----------------------------------  "<<endl;
cout<<"   ---------------------- Que te depara en el amor --------------------------"<<endl;
cout<<"Gracias a la influencia de Venus, astro que representa el amor, el arte y la belleza; sus sentimientos ser�n profundos y estables. Lo m�s importante en su vida ser� el amor, lo cual le proporcionar� felicidad y lo har� sentirse realizado de verdad. Aunque actuar� de manera orgullosa, desear� compartir su vida con una persona fiel, afectuosa y respetuosa.";
}
if (n==3)
{
cout<< "   ------------------------------- GEMINIS ---------------------------------  "<<endl;
cout<< "   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<< "No conocer� el t�rmino fidelidad, ya que lo asimilar� como sin�nimo de aburrimiento. Sin embargo, aunque su libertad ser� algo muy importante y no estar� dispuesto a renunciar a ella de manera f�cil, lo har� si encuentra a una persona demasiado valiosa";
}

if (n==4)
{
cout<<"   ------------------------------- CANCER ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El romanticismo y la sensibilidad, que le caracterizan, har�n del amor un sentimiento vital para su existencia. Desear� encontrar esa alma gemela que le ofrezca comprensi�n, compa��a y apoyo incondicional. Existen dos tipos de C�ncer, el que atrae con facilidad al sexo opuesto o el que se sume en la m�s profunda soledad.";
}
if (n==5)
{
cout<<"   --------------------------------  LEO  -----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Es estable, organizado y necesita recibir por parte de su pareja el asidero y el apoyo que le permita avanzar y salir adelante, por esa raz�n aunque tiende a ser individualista, dif�cilmente se ve un Leo solitario. Pretender� dominar a su pareja, lo cual lo har� sentirse seguro del otro.";
}
if (n==6)
{
cout<<"   -------------------------------- VIRGO -----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<"\nVirgo es el signo menos apasionado de todo el zod�aco. La idea de ser presa de sus instintos y deseos le ocasionar� temor y creer� que enamorarse, en el mejor de los casos, s�lo le traer� dolores de cabeza. Intentar�, pase lo que pase, controlar sus sentimientos y racionalizar� el t�rmino amor.";
}
if (n==7)
{
cout<<"   -------------------------------- LIBRA ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" La naturaleza enamoradiza y no muy estable que le caracteriza, dar� pie al surgimiento de muchas alianzas en el curso de su vida y siempre estar� a la espera de la persona perfecta o ideal para entregarse sin restricciones.";
}
if (n==8)
{
cout<<"   ----------------------------- ESCORPION ---------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El amor ser� un motivo para vivir o morir. Poseer� gran simpat�a en el amor, especialmente, por las personas con las que difiere en edad. Aunque los lazos que establezca ser�n s�lidos y duraderos, estar� expuesto a pasar por temporadas, en las que se generar�n brechas enormes.";
}
if (n==9)
{
cout<<"   ----------------------------- SA GITARIO --------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Ser� propenso a sentir r�pidamente las llamas y la ilusi�n del enamoramiento. Es proclive a las decepciones y a las frustraciones sentimentales; sin embargo, no se dejar� abatir y se lanzar� de cabeza a nuevas experiencias. La vida le ofrecer� demasiadas maravillas para limitarse a una sola persona, lo que le impedir� vivir cada uno de sus romances a plenitud.";
}
if (n==10)
{
cout<<"   ---------------------------- CAPRICORNIO --------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Por muy enamorado que est�, siempre mantendr� los pies sobre la tierra y es dif�cil que caiga en actitudes rom�nticas o se implique verdaderamente en una relaci�n; sin embargo, el d�a que abra la puerta de su coraz�n a un nuevo sentimiento, ser� muy dif�cil que rompa esa uni�n.";
}
if (n==11)
{
cout<<"   ------------------------------- ACUARIO ---------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" Sus relaciones sentimentales se mover�n en el laberinto de lo impredecible. Aparte de su originalidad, Acuario siempre reservar� algo de su personalidad para s� mismo, de esta manera tratar� de conservar su intimidad. Las ataduras de cualquier tipo, lo har�n sentir inc�modo y no soportar� ninguna clase de presi�n. Sin embargo, aunque puede ser fiel y mantener una relaci�n estable, jam�s renunciar� a su idea de independencia.";
}
if (n==12)
{
cout<<"   ------------------------------- PISCIS ----------------------------------  "<<endl;
cout<<"   --------------------- Que te depara en el amor --------------------------  "<<endl;
cout<<" El manejo del amor abarca gran parte de su vida, ya que cuando se enamora, se entrega por completo y cree que la persona que ha encontrado es la mejor del mundo lo que como es obvio le ocasionar� m�ltiples sinsabores. Sin embargo, esto no significa que se pueda volver a enamorar de otra persona con la misma intensidad.";
}
system ("PAUSE");
getch();

}

