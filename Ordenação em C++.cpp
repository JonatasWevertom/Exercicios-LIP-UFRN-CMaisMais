#include<iostream>
#include <cstring>

using namespace std;

#define MAX 32

struct Aluno
{
    char nome[MAX];
    double matricula;
    float nota;
};
void maior_menor(Aluno v[],int n,float& maior,float& menor)
{
    maior = v[0].nota;
    menor = v[0].nota;
    for(int i=0; i<n; i++)
    {
        if(maior<v[i].nota)
        {
            maior = v[i].nota;
        }
        if(menor>v[i].nota)
        {
            menor = v[i].nota;
        }
    }
}
int main()
{
    int n;
    float maior,menor;
    cout<<"Insira quantos alunos: "<<endl;
    cin>>n;
    Aluno v[n];
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Informe o nome: "<<endl;
        cin.getline(v[i].nome,MAX);
        cout<<"Insira sua matricula: "<<endl;
        cin>>v[i].matricula;
        cout<<"Informe sua nota: "<<endl;
        cin>>v[i].nota;
        cout<<endl;
    }
    maior_menor(v,n,maior,menor);
    for(int i=0; i<n; i++)
    {
        if(maior==v[i].nota)
        {
            cout<<"Maior: "<<v[i].nota<<endl;
            cout<<"Matricula: "<<v[i].matricula<<endl;
            cout<<"Nome: "<<v[i].nome<<endl;
            cout<<endl;
        }
        if(menor==v[i].nota)
        {
            cout<<"Menor: "<<v[i].nota<<endl;
            cout<<"Matricula: "<<v[i].matricula<<endl;
            cout<<"Nome: "<<v[i].nome<<endl;
            cout<<endl;
        }
    }
}
