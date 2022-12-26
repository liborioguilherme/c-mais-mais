#include<iostream>
using namespace std;

int main()
{
int codigo,quanti,res;
float preco;
cout << " Nossos produtos: \n 1 Cachorro quente \n 2 X- salada \n 3 X- bacon \n 4 Torrada simples \n 5 Refrigerante \n \n";
cout << "Digite o código para saber o preço \n";
    cin >> codigo;
    if(codigo ==1){
     cout << "Cachorro quente \n";
    preco = 4;
    cout << "O preço e R$" << preco << " Reais \n";
    cout << "Digite a quantidade desejada \n";
     cin >> quanti;
    res =preco*quanti;
    cout << "O preço a pagar e R$" << res << " Reais";
    }else if(codigo==2){
     cout << "X - salada \n";
    preco = 4.50;
    cout << "O preço e R$" << preco << " Reais \n";
    cout << "Digite a quantidade desejada \n";
    cin >> quanti;
    res = preco*quanti;
    cout << "O preço a pagar e R$" << res << " Reais";
    }
    else if(codigo==3){
     cout << "X - bacon \n";
    preco = 5;
    cout << "O preço e R$" << preco << " Reais \n";
    cout << "Digite a quantidade desejada \n";
    cin >> quanti;
    res = preco*quanti;
    cout << "O preço a pagar e R$" << res << " Reais";
    }
    else if(codigo==4){
     cout << "Torrada simples \n";
    preco = 2;
    cout << "O preço e R$" << preco << " Reais \n";
    cout << "Digite a quantidade desejada \n";
    cin >> quanti;
    res = preco*quanti;
    cout << "O preço a pagar e R$" << res << " Reais";
    }
    else if(codigo==5){
     cout << "Refrigerante \n";
    preco = 1.50;
    cout << "O preço e R$" << preco << " Reais \n";
    cout << "Digite a quantidade desejada \n";
    cin >> quanti;
    res = preco*quanti;
    cout << "O preço a pagar e R$" << res << " Reais";
    }
    else if(codigo>5){
    cout << "Infelizmente não temos codigo a cima de 5";
    }
    return 0;
}