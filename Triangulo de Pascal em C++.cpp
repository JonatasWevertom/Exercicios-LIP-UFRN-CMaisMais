#include <iostream>

using namespace std;

int fat(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}
int termo(int i, int j){
    return fat(i)/(fat(i-j)*fat(j));
}
void imprime_tri_pascal(int l){
    for (int i=0; i<l; i++){
        for(int j=0; j<=i; j++){
            cout<<termo(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int nlinha;
    cin>>nlinha;
    imprime_tri_pascal(nlinha);
    return 0;
}
