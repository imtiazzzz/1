#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[120]/*="AABXNJSU"*/;
    char b[30]/*="BXN"*/;
    cout<<"Size of A: ";
    cin>>a;
    cout<<"Size of B: ";
    cin>>b;

    int n,i,j;
    int sizeA=strlen(a);
    int sizeB=strlen(b);
    //cout<<"Size of elements: ";
    //cin>>n;


    for(i=0; i<=(sizeA-sizeB); i++){
        for(j=0; j<=sizeB; j++)
            if(a[i+j] != b[j])
            break;
        if(j==sizeB)
        {
            cout<<"found at: "<<i;
        }
    }

    //cout<<"Elements found: "<<endl;
}
