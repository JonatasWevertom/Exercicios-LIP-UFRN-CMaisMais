#include <iostream>

using namespace std;

int main()
{
    /*O objetivo desta aula de laboratório é praticar o uso de estruturas de controle como visto na parte teórica da
    disciplina. Para isto, você deve implementar um programa que receba como entrada um número inteiro positivo n
    e que imprima na tela quais dos n primeiros números inteiros positivos é primo ou não. Um exemplo é mostrado
    a seguir:*/

    int i, n;

    cout<<"insira um numero inteiro positivo: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n%i==0){
            cout<<i<<" :divisivel"<<endl;
        }
        else{
            cout<<i<<" :divisivel"<<endl;
        }
        }

    return 0;
}
