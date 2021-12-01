#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;

    cout<<"Enter any digit:";
    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"Two";
        break;
    default:
        cout<<"Not digit";
    getch();
