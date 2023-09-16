#include<iostream>
using namespace std;

int main(){
    int arr[3, -4, 0, 6, 4, 5, -2, -1, 14];
    int b[9];
    
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << arr[i] << "\n";
            }
            
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << b[i] << "\n";
    }
    
}

