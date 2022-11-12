#include <iostream>
using namespace std;
int main()
{
    int liczba_testow, xa, ya, xb, yb, xc, yc;
    cin>>liczba_testow;

    while(liczba_testow--)
    {
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        if((xa*yb+xb*yc+xc*ya-xc*yb-xb*ya-xa*yc)==0)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
