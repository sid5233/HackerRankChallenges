#include <iostream>
#include<string>
using namespace std;


int main() {
    char str[100],str1[20][20];
    int j=0,k=0;
    int nmbr;
    cout << "Enter no of string : \n";
    cin >> nmbr;
    cin.ignore();
    cout << "Enter string : \n";
   cin.getline(str,sizeof(str));
    for (int i=0; i !='\0'; i++ )
    {
        if (str[i]%2==0)
        {
            str1[j][k];
            j++;
        }
        else
        {
            str1[j][k];
            k++;
        }
        cout << str1;
    }

}