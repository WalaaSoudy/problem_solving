#include <iostream>
using namespace std;

int main()
{
    long t;
    cin>>t;
    long arr[t];
    for( int i=0 ; i<t ; i++)
        cin>>arr[i];
    for( int i=0 ; i<t ; i++)
    {
        if(arr[i]<3)
            cout<<0<<endl;
        else
            cout<<(arr[i]-1)/2<<endl;

    }
    return 0;
}
