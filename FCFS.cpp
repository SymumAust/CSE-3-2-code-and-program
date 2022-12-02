
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int p;
    int arr[100];
    cout<<"Enter the number of process: ";
    cin>>p;
    cout<<"Enter the CPU times: ";
int k=0,m=0;
double tu=0,av=0;

    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<p; j++){
            k= k+arr[j];
            av =av+m;
    tu = tu +k;

    cout<<"Process "<<j+1<<": Waiting Time: "<<m<<" Turnaround Time: "<<k<<endl;
    m= m+arr[j];

    }

      cout<<"Average Waiting time: "<<av/p<<endl;
        cout<<"Average Waiting time: "<<tu/p<<endl;



}
