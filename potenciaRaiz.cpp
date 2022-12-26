#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int a,res1,b,res2;
    cout << "Digite um número para saber a potência \n";
    cin >> a;
     res1 = pow(a,2);
    cout<< "a potência de " << a << " e " << res1 << "\n";
    cout << "Digite um número para saber a raiz \n";
    cin >> b;
    res2 = sqrt(b);
    cout << "a raiz de " << b << " e " << res2;
    
    return 0;
}