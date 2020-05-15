#include <iostream>

using namespace std;

void le_vetor(int v[], int n);
void imprime_vetor(int v[], int n);
void maior(int v[], int n);
void ocorrencias(int v[], int n, int v1[]);
int main()
{

    int n;

    cout<<"Informe o numero de elementos do vetor: "<<endl;
    cin>>n;

    int v[n], v1[10];

    le_vetor(v,n);
    imprime_vetor(v,n);
    ocorrencias(v,n,v1);
    maior(v,n);

    return 0;
}
void le_vetor(int v[], int n)
{

    cout<<"Informe cada um dos elementos do vetor: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
}
void imprime_vetor(int v[], int n)
{

    cout<<"vetor= ";

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void maior(int v[], int n){

    int maior;

    for(int i=0; i<n; i++){
        if(v[i]>maior){
            maior=v[i];
        }
        if(v[i]==maior){
            cout<<"Posicao do maior elemento: "<<i<<endl;
        }
    }
}
void ocorrencias(int v[], int n, int v1[])
{
    v1[10]= {0};

    for(int i=0; i<n; i++)
    {
        if(v[i]==i)
        {
            v1[i]++;
        }
    }

    cout<<"Ocorrencias de cada digito: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<v1[i];
    }
    cout<<endl;
}
