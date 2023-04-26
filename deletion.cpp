#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[100],i,x,n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: \n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position you want to remove: ";
    cin>>x;

        for(i=x; i<n; i++)
        {
            a[i-1]=a[i];
        }
    n=n-1;
    cout<<endl;

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
