#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,col,row;
    cout<<"Enter any lines:";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();
}
