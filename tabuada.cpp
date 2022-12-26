#include<iostream>
using namespace std;

int main()
{
int i=1,num,res;
 cout << "digite a tabuada desejada \n";
 cin >> num;
while(i<=10){
 res = num*i;
cout << num << " X " << i << " = " << res<< "\n" ;
  i++;
}


    return 0;
}