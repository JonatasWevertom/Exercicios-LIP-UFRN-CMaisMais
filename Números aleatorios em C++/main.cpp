#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); //inicializa semente
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cout << rand() << endl;
    }
    return 0;
}
