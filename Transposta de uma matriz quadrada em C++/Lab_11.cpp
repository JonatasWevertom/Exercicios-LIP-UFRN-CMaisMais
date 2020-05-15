#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define MAX 100

void le_matriz(int mat[][MAX], int n)
{
    int i, j;
    cout<<"Insira os elementos da matriz:\n";
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<mat[i][j];
        }
    }
}
void v_ou_f(int mat[][MAX], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(mat[i][j]!=0 || mat[i][j]!=1)
            {
                cout<<"A matriz nao eh binaria";
            }
            else
            {
                cout<<"A matriz eh binaria";
            }
        }
    }
}
void soma(int mat[][MAX],int n)
{
    int i, j, soma=0;
    cout<<"Soma dos elementos das linhas:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            soma+=mat[i][j];
        }
        cout<<"Linha "<<i<<": "<<soma;
    }
}
void transposta(int mat[][MAX], int n)
{
    int i, j, soma=0;
    cout<<"Soma dos elementos das colunas:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            soma+=mat[j][i];
        }
        cout<<"coluna "<<i<<": "<<soma;
    }
}
void permutacao(int mat[][MAX], int n)
{
    int i, j, soma1=0, soma2=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(mat[i][j]==1)
            {
                soma1+=mat[i][j];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(mat[j][i]==1)
            {
                soma2+=mat[j][i];
            }
        }
    }
}
int main()
{
    int mat[MAX][MAX], n;
    cout<<"Insira a ordem da matriz quadrada:\n";
    cin>>n;
    le_matriz(mat,n);
    v_ou_f(mat,n);
    soma(mat,n);
    transposta(mat,n);

    return 0;
}
