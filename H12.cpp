#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin >> row >> col;
    for (int i=1;i<=row;i++)
        {
            for (int c=1;c<=col;c++)
            {
                if (i == 1 || i == row ||  c == 1 || c == col)          
                    cout << "*";              
                else
                    cout << " "; 
            }cout << "\n";

        }
}