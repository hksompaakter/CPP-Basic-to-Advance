#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter any last number:";
    cin>>n;
    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+i*i;
    }
    cout<<sum;
}
