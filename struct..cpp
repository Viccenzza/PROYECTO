#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

struct
{
	string persona;
	int Nombre;
	int Direccion;
	int AnyoNacimiento;
}Fulanito;
  Fulanito.persona =5;
  Fulanito.Nombre =4;
  Fulanito.AnyoNacimiento=2023;
  cout<<"la persona es igual a "<<Fulanito.persona<<endl;
  cout<<"su nombre es "<<Fulanito.Nombre<<endl;
  cout<<"su año de nacimiento es "<<Fulanito.AnyoNacimiento<<endl;
}
