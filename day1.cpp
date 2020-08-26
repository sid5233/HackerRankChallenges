#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int j,sumi;
    double k,sumd;
    string str,full;

    cin >> j;
    cin >> k;
    cin.sync();
    getline(cin,str);

    sumi = i+j;
    sumd = d+k;
    full = s + str;

    cout << sumi  << endl;
    cout << sumd  << endl;
    cout << s + str;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
