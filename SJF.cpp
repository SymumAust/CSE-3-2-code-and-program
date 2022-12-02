#include<bits/stdc++.h>
using namespace std;


typedef struct mystruct
{
    int p;
    int cp;
    int ar;


} Student;



bool compare( Student a,  Student b)
{

    if(a.ar < b.ar)
        return 1;
    else
        return 0;
}

bool compare2( Student a,  Student b)
{

    if(a.cp < b.cp)
        return 1;
    else
        return 0;
}


int main()
{
    cout<<"SJF by MD.SYMUM HOSSAIN"<<endl;
    cout<<"Date: 2/12/2022"<<endl;

    struct mystruct vr[100];
    int q;
    cout<<"Enter the number of process: ";
    cin>>q;



    for(int i=0; i<q; i++)
    {
        cout<<"Process: "<<i+1<<endl;
        vr[i].p=i+1;


        cout<<"Enter the  Arrival --> CPU times: ";


        cin>>vr[i].ar;
        cin>>vr[i].cp;



    }

    cout<<endl;



    int t;
    int temp;
    double tu=0;
    sort(vr, vr+q, compare);
    for(int j=0; j<1; j++)
    {
        cout<<"Process "<<vr[j].p<<": Waiting Time: "<<0<<" Turnaround Time: "<<vr[j].cp<<endl;
        t = vr[j].p;
        tu = vr[j].cp;

    }

    int m = vr[0].cp;
    double wt = 0;


    sort(vr, vr+q, compare2);


    for(int j=0; j<q ; j++)
    {

        if(vr[j].ar<m  && (m-vr[j].ar)>=0   && vr[j].p!=t)
        {
            wt =wt+ (m-vr[j].ar);
            tu = tu +vr[j].cp+(m-vr[j].ar);
            cout<<"Process: "<<vr[j].p<<": Waiting Time: "<<m-vr[j].ar<<" Turnaround Time: "<<vr[j].cp+(m-vr[j].ar)<<endl;
            m =m+vr[j].cp;
        }


    }
    cout<<endl;
    cout<<"Average Waiting time : "<<wt/3<<endl;
    cout<<"Average Turnaround time : "<<tu/3<<endl;



    /*for(int j=0; j<q; j++)
    {
         cout<<"Process "<<j+1<<": Waiting Time: "<<m<<" Turnaround Time: "<<vr.cp[j]<<endl;

    }*/








}

