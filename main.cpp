#include<iostream>
using namespace std;
int main()
{
    int a[30],n,i,j,minm,loc,temp;
    cout<<"Enter the number of an elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array: "<<endl;
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    cout<<"Elements before sorting: "<<endl;
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<endl;

        //Selection sort
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[i])
            {
               temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }

    }}
    cout<<"Elements after sorting: "<<endl;
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<endl;
}
