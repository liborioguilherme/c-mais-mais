#include<iostream>
using namespace std;

int main()
{

int i,n,t1=0,t2=1,proxTermo;

    cout << "Digite a quantidade de termos !\n";
 
  cin >> n;
  
   for(i=1;i<=n;i++){
 
   cout << t1 << " ";
   
 proxTermo = t1+t2;
   
   t1=t2;
  
  t2=proxTermo;


    }
    
    
    
    return 0;
}