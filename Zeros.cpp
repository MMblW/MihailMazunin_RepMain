#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int arr[] = {12, 53, 0, 66, 0};
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5 && arr[j] == 0; j++)
        {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

