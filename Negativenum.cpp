#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int i, sum=0;
    cout<<"Enter any number: ";
    cin>>i;
    while(i<=0)
    {
        sum =sum+i;
        cout<<"Enter any number: ";
        cin>>i;
    }
    cout<<"Sum: "<<sum;

    getch();
}
