#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <istream>
using namespace std;


int main() {
    int row,col;
    getline(cin,row);
    getline(cin,col);
    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
                cout << "*";
            else 
                cout <<" ";
        }cout << "\n";
    }
    return 0;
}
