#include<iostream>
using namespace std;

int main()
{
int i,soma=0,n;
    cout << "Digite um número para saber se ele é perfeito !\n";
    cin >> n;
    for(i=1;i<n;i++){
    if(n % i == 0){
    soma+=i;
    }
    }
    if(soma==n){
     cout << "O número " << n << " é perfeito!";
    }else{
     cout << "não é perfeito";
    }
    
    
    return 0;
}