#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int arr[9][9] = {};
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            arr[i][j] = 1;
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((i + j) % 2 == 1)
        {
            arr[i][j] = 0;
        }
        }
    }
    for (i = 0; i < 9; i++)
    {
        cout << endl;
        for (j = 0; j < 9; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}