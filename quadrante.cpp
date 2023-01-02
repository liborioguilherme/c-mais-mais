#include<iostream>
using namespace std;

int main()
{
int x,y;
    cout << "Digite o valor de X!\n";
    cin >> x;
    cout << "Digite o valor de y";
    cin >> y;
    if(x>0 && y>0){
     cout <<"1° quadrante";
    }
    else if(x<0 && y>0){
     cout << "2° quadrante";
    }
    else if(x<0 && y<0){
     cout << "3° quadrante";
    }
    else if(x>0 && y<0){
     cout<< "4° quadrante";
    }
    return 0;
}