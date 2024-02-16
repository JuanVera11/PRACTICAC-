#include<iostream>

int main(){
float n1,n2,suma,resta,mul,div;
std::cout<<"Humano!!! escribe un numero: ";
std::cin>>n1;
std::cout<<"Humano!!! escribe otro numero: ";
std::cin>>n2;
suma=n1+n2;
resta=n1-n2;
mul=n1*n2;
div=n1/n2;
std::cout<<"resultado de la suma="<<suma<<"\n";
std::cout<<"resultado de la resta="<<resta<<"\n";
std::cout<<"resultado de la multliplicacion="<<mul<<"\n";
std::cout<<"resultado de la division="<<div<<"\n";


system("pause");
return 0;

}