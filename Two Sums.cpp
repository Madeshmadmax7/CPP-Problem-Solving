#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    cout<<"Enter "<<n<<" number of terms : ";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"Enter the term to be searched : ";
    cin>>target;
    for(int i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])==target)
        {
            cout<<"The indexes are "<<i<<" "<<i+1;
        }
    }
    return 0;
}
