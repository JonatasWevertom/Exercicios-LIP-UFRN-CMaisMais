#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

#define  MAX 51

using namespace std;

struct Aluno
{
    char nome [ MAX ];
    float nota ;
};

int main()
{
    int i, n;
    fstream arq;
    arq.open("arq.txt");
    if(arq.is_open() == true){
        cout << "Arquivo aberto corretamente\n";
    }
    else
    {

        int n;
        arq>> n;
        Aluno v[n];
        for (int i=0; i<n; i++)
        {
            arq.ignore();
            arq.getline (v[i]. nome, MAX );
            arq>>v[i]. nota;
        }
        arq.close () ;
        Aluno maior = v [0];
        for (int i = 0; i<n; i++)
        {
            if(v[i].nota > maior.nota )
            {
                maior = v[i];
            }
        }
        cout << " Aluno com a maior nota : " << endl ;
        cout << maior . nome ;
        cout << " Nota : " << endl ;
        cout << maior . nota ;

    }


 return 0;
}
