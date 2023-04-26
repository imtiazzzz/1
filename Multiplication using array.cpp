#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Numbers of Elements: ";
    cin>>n;

    int array[n];
    cout<<"Arrays are: \n";

    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int num=1;
    cout<<" "<<endl;
    for(int i=n-1; i>=0; i--)
    {
       num=num*array[i];
    }
    cout<<"Multiplication is: "<<num;
}
