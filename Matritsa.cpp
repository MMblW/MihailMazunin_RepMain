#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int p = 10;
    int arr[9][9] = {};
    for (i = 0; i < 9; i++)
        {
            p--;
            for (j = 0; j < 9 - i; j++)
            {
                arr[j][j+i] = p;
                arr[j+i][j] = p;
            }
        }
    for (i = 0; i < 9; i++)
    {
        cout << endl;
        for (j = 0; j < 9; j++)
        cout << arr[i][j] << " ";
    }
}