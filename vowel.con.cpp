#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter any latter:";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    getch();
}
