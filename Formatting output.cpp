#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;

    cout<<"Enter two values:";
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<setprecision(10);
    cout<<fixed;

    float sum=num1+num2;
    cout<<setw(20)<<"sum is:"<<sum;
    cout<<endl;

    float mul=num1*num2;
    cout<<"multipliction is:"<<mul;
    cout<<endl;

    float div=num1/num2;
    cout<<"division is:"<<div;
    cout<<endl;


    getch();
}
