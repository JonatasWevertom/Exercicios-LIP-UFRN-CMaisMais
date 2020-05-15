#include <iostream>

using namespace std;

int main()
{
    int i, x, cont=0;
    cout<<"insira um numero: "<<endl;
    cin>>x;
    for(i=1; i<=x; i++){
        if(x%i==0){
            cont++;
        }
    }
    if(cont==2){
            cout<<x<<" e primo"<<endl;
        }
        if(cont!=2){
            cout<<x<<" nao e primo"<<endl;
        }
    return 0;
}
