#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=0,b=1,c;

    cout<<"Enter an Number: ";
    cin>>n;

    cout<<a<<" "<<b<<" ";
    for(int i=1; i<n; i++){
        c=a+b;
        cout<<c<<"F ";
        a=b;
        b=c;
    }
    cout<<""endl;
}

