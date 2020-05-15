#include <iostream>

using namespace std;

int main()
{
    int i, x;
    cout<<"insira um numero: "<<endl;
    cin>>x;
    for(i=1; i<=x; i++){
        if(x%i==0){
            cout<<i<<" e um divisor de "<<x<<endl;
        }
        else{
            cout<<i<<" nao e um divisor de "<<x<<endl;
        }
    }

    return 0;
}
