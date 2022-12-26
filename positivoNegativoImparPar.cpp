#include<iostream>
using namespace std;

int main()
{
int num;
    cout << "Digite um numero\n";
    cin >> num;
    if(num > 0 ){
     cout << "O numero " << num <<" e positivo" ;
    }else{
     cout << "O número " << num << " e negativo " ;
    }
    if(num %2==0){
     cout  << "\n O número " << num << " e par";
    }else{
     cout << " \n O número " << num << " e impar";
    }
   
   
    return 0;
}