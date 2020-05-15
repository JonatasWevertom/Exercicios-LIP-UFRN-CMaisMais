#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main ()
{
    char m[4][3];
    int a=0, b=0, c=0, aux=0, comp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = 95;
            m[i][0] = 49+i;
            m[3][j] = 193;
            cout << m[i][j] << " ";
        }
        cout << endl;
        cout << endl;
    }
    while (comp!=1)
    {
        cout << "Coluna origem: ";
        cin >> a;
        cout << "Linha do numero: ";
        cin >> b;
        cout << "Coluna destino: ";
        cin >> c;

        for (int i=2; i>-1; i--)
        {
            while (m[b-1][a-1] > m[i][a-1] && m[i][a-1]!=95)
            {
                system ("cls");

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        m[3][j] = 193;
                        cout << " " << m[i][j] << " ";
                    }
                    cout << endl;
                    cout << endl;
                }
                cout << "Ha numeros menores para serem tirados na coluna." << endl;
                cout << "Coluna origem: ";
                cin >> a;
                cout << "Linha do numero: ";
                cin >> b;
                cout << "Coluna destino: ";
                cin >> c;
            }
        }
        for (int i=2; i>-1; i--)
        {
            while (m[i][a-1] > m[i][c-1])
            {
                system ("cls");

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        m[3][j] = 193;
                        cout << " " << m[i][j] << " ";
                    }
                    cout << endl;
                    cout << endl;
                }
                cout << "Por favor, nao coloque numeros maiores sobre os menores" << endl;
                cout << "Coluna origem: ";
                cin >> a;
                cout << "Linha do numero: ";
                cin >> b;
                cout << "Coluna destino: ";
                cin >> c;
            }
            if (m[i][c-1]==95)
            {
                aux = m[i][c-1];
                m[i][c-1] = m[b-1][a-1];
                m[b-1][a-1] = aux;
            }
        }
        system ("cls");
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m[3][j] = 193;
                cout << " " << m[i][j] << " ";
            }
            cout << endl;
            cout << endl;
        }
    }
}
