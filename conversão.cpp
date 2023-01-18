#include<iostream>
using namespace std;

int main()
{
   int real,res,op,dolar,euro;
	double cota;
	cout<<"digite o número para realizar as conversão  1 - real para dolar \n 2 - dólar para real \n 3 - euro para real \n";
	cin >> op;
if(op==1){
 cout << "Digite o valor em Reais \n R$ ";
  cin >> real;
cout << "Digite a cotação do dólar atual \n $ ";
cin >> cota;
res = real/cota;
cout << "O valor em dolar e " << res;
}
else if(op==2){
 cout << "Digite o valor em dolar \n $";
cin >> dolar;
cout << "Digite a cotação do dólar em real \n";
cin >> cota;
res = dolar*cota;
cout << "O valor em Reais é " << res;
}
else if(op==3){
cout << "Digite o valor em euro \n €";
cin >> euro;
cout << "Digite a cotação do euro \n ";
cin >>  cota;
res = euro*cota;
cout << "O valor em Reais é R$" << res;
}
	
    return 0;
}