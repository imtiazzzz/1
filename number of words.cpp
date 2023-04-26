#include<iostream>
using namespace std;

int main()
{
    char str[0];

    cout<<"Enter a String: ";
    cin.get(str.100);

    for(int i=0; str[i] !='\0'; i++)
     {
        if(str[i]==' ')
        {
            w++;
        }
     }

     cout<<"Entered: "<<str<<endl;
}
