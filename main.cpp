##include <iostream>
#include "emamen.hpp"

using namespace::std;

int a, b,n,factorial= 1;


int main () {

cout<<"\nSuma\n";
cout<<"\ningrese 2 numeros\n";
cin>>a;
cin>>b;

int ResulS =suma(a,b);
cout<<"la suma es "<<ResulS<<endl;


cout<<"\nDivicion\n";
cout<<"\ndivicion"<<endl;
cout<<"\ningrese 2 nmeros\n";
cin>>a;
cin>>b;
int ResulD=div(a,b);
cout<<"la divicion es "<<ResulD<<endl;

cout<<"\nFactorial de un numero\n";
cout<<"\nDigite un numero\n";
cin>>n;

for(int i=1;i<=n;i++){
	factorial=factorial *i;
}
cout<<"El factorial del numero es "<<factorial<<endl;
system("pause");

	return 0;
}

