#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<< "Digite um número para saber se é primo ou nao \n";
 cin >> n;
if(n<=1){
cout << "não é primo";
}else{
for(i=2;i<n;i++){
  if(n%i==0){
  cout << "não é primo";
}

}
if(i==n){
 cout << "e primo";
}
}
    return 0;
}