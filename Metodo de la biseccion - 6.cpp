#include <conio.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);

}
using namespace std;

main(){
double a, b,r,i,fa,fb,fb1,xr,fxr,fab,ac,er;
char resp;
do{
	system("cls");
	cout<<"Ecuacion ----------------------------------------Senx+2x-1---------------------------------------------"<<endl;
	cout<<"Ingrese los limites [a,b]"<<endl;
	cout<<"Importante: A debe ser menor igual a -2 y B mayor igual a 2"<<endl;
	
	do{
		r=0;
		cout<<endl<<"Ingrese limite inferior -------->NOTA: debe ser menor igual a -2"<<endl;
		cin>>a;
		if(a>-2){
			cout<<endl<<"LIMITE INCORRECTO, INTENTELO DE NUEVO "<<endl;
			r=1;
		}
	}while(r==1);
	do{
		r=0;
		cout<<endl<<"Ingrese limite superior ----------> NOTA: debe ser mayor igual a 2"<<endl;
		cin>>b;
		if(b<2){
			cout<<endl<<"LIMITE INCORRECTO, INTENTELO DE NUEVO "<<endl;
			r=1;
		}
	}while(r==1);
	do{
		r=0;
		cout<<"Ingrese el numero de iteraciones"<<endl;
		cout<<"NOTA: El numero de iteraciones debe ser mayor o igual a 1"<<endl;
		cin>>i;	
		if(i<1){
			cout<<endl<<"LIMITE INCORRECTO, INTENTELO DE NUEVO "<<endl;	
			r=1;
		}	
	}while(r==1);
	system("cls"); 
	for(ac=1;ac<i+1;ac++){
		gotoxy(1,2);cout<<"Itera  ";
		gotoxy(8,2);cout<<"||  Lim a  ";
		gotoxy(19,2);cout<<"||  Lim b  ";
		gotoxy(30,2);cout<<"||  f(a)  ";
		gotoxy(40,2);cout<<"||  f(b)  ";
		gotoxy(50,2);cout<<"||  xr  ";
		gotoxy(58,2);cout<<"||  f(xr)  ";
		gotoxy(69,2);cout<<"||  f(a)*f(b)  ";
		gotoxy(84,2);cout<<"||  Raiz  ||";
		gotoxy(1,3+ac);cout<<ac; gotoxy(8,3+ac);cout<<"||";
		gotoxy(10,3+ac);printf("%.3f\n", a); gotoxy(19,3+ac);cout<<"||";
		gotoxy(23,3+ac);cout<<b; gotoxy(30,3+ac);cout<<"||";
		fa=sin(a)+(2*a)-1;
		gotoxy(32,3+ac);printf("%.3f\n", fa);  gotoxy(40,3+ac);cout<<"||";
		
		
		fb=sin(b)+(2*b)-1;
		gotoxy(42,3+ac);printf("%.3f\n", fb);  gotoxy(50,3+ac);cout<<"||";
		xr=(a+b)/2;
		gotoxy(52,3+ac);printf("%.3f\n", xr);  gotoxy(58,3+ac);cout<<"||";
		fxr=sin(xr)+(2*xr)-1;
		gotoxy(60,3+ac);printf("%.3f\n", fxr);  gotoxy(69,3+ac);cout<<"||";
		fab=fa*fb;
		gotoxy(71,3+ac);printf("%.3f\n", fab);  gotoxy(84,3+ac);cout<<"||";
		if(fab<0){
			gotoxy(88,3+ac);cout<<"-"; 
			b=xr;
		}
		else{
			gotoxy(88,3+ac);cout<<"+";
			a=xr;
		}
		gotoxy(94,3+ac);cout<<"||";
		er=(b-a)/pow(2,i);
		
	}
	cout<<endl<<"Er: "<<er;
	cout<<endl<<"Xr: "<<xr;
	
	getch();
	ac=0;
	fa=0;
	fb=0;
	fb1=0;
	xr=0;
	fxr=0;
	fab=0;
	a=0;
	b=0;
	i=0;
	
	cout<<endl;
	cout<<"DESEA REINCIAR EL PROGRAMA?   s/n"<<endl;
	cin>>resp;	
}while(resp!='n');
	
}

//b-a/2^i
