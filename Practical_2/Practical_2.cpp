#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
    string S1 = "\\HelloWorld";
    cout << "Char\tAND\tOR\tXOR" << endl;
    for(int i=0;i<S1.length();i++)
    {
        cout << S1[i] << "\t\t" << char(S1[i]&127) << "\t" << (S1[i]|127) << "\t"  <<(S1[i]^127) << endl;
    }
    return 0;
}
