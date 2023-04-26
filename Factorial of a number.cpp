#include<iostream>
using namespace std;

int main()
{
    int n;
    int num=0;
    cout<<"Enter an Number: ";
    cin>>n;

    num=n;
    for(int i=1; i<n; i++){
        num*=i;
    }

    cout<<"Factorial of a number is: "<<num;
}
