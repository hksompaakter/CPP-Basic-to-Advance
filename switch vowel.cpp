#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter any letter:";
    cin>>ch;

    switch(ch)
    {
    case 'a':
        cout<<"Vowel";
        break;

    default:
        cout<<"Consonant";
    getch();



    }
}
