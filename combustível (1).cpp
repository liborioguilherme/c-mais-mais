#include<iostream>
using namespace std;

int main()
{
int km,gasto, combustível ;
cout << "Digite a distância percorrida \n";
cin >> km;
cout << "Digite o consumo do combustível \n";
cin >> combustível ;
gasto = km/combustível ;
    cout << "A distância percorrida foi  \n" << km << " \n";
    cout << "o consumo de combustível foi \n"<< combustível << "\n" ;
    cout << "Seu gasto médio de combustível foi " << gasto;
    return 0;
}
    