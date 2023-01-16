#include<iostream>
using namespace std;

int main()
{

int n,i,fat=1;
   
 cout << "Digite um numero para saber o fatorial!\n";
 
 cin >> n;


  for(i=n;i>1;i--){

  fat=fat*i;

}

    cout << "O fatorial de " << n << " é " << fat;
 

   
    
       return 0;
}