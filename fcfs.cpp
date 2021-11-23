#include <iostream>
using namespace std;
int main ()
{
    int n,bt[20],wt[20],tat[20],awt=0,avwt=0,avtat=0,i,j;
    cout << "Enter total number of processes(maximum 20):";
    cin >> n;

    cout << "\n Enter Process Burst Time \n";
    for ( i = 0; i < n; i++)
    {
        cout << "P["<<i+1<<"]:";
        cin >> bt[i];
    }

    wt[0]=0;

    //calculate wt
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for ( j = 0; j < i; j++)
        {
            wt[i]+=bt[j];
        }
    }

    cout << "\nProcess\t\t Burst Time\t Waiting TIme \t Turnaround Time";
    
    // Calculate TAT

    for ( i = 0; i < n; i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt +=wt[i];
        avtat+=tat[i];
        cout << "\n P["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    
    avwt/=i;
    avtat/=i;
    cout<<"\n\n Avarage Waiting Time : " << avwt;
    cout<<"\n\n Avarage Turnaround Time : " << avtat;
    return 0;
}
