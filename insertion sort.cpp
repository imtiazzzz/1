#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i,j,current;
    for( i=1; i<n; i++){
         current = arr[i];
         j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for( i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
