//analysis of time complexity in gnome sort
#include<bits/stdc++.h>
#include<ctime>
#include"generate_array.h"
using namespace std;
void swap (int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
    cout<<endl;
}
void gnome_sort(int a[],int n)
{
    int mcount=0;
    for(int i=0;i<n;mcount++)
    {
        //cout<<"iteration "<<mcount<<endl;
        if(i==0)
            i++;
        if(a[i-1]>a[i])
        {

            swap(&a[i-1],&a[i]);
            i--;
        }else
        {
            i++;
        }
    }
    cout<<"Total Iteration : "<<mcount<<" | % is "<<(mcount/n)<<endl;
    display(a,n);
}

int main()
{
    int T,max_l,max_n;
    cout<<"Enter Total Cases:";
    cin>>T;
    cout<<"Enter max-length for array:";
    cin>>max_l;
    cout<<"Enter max-number for array:";
    cin>>max_n;

    while(T>0)
    {
        int temp=1+rand()%max_l;
        int temp2=1+rand()%max_n;
        int *x=gen_array(temp,temp2);
        cout<<"Current array is "<<endl;
        for(int i=0;i<temp;i++)
            cout<<*(x+i)<<" ";
        cout<<endl<<"After Sorting.."<<endl;
        gnome_sort(x,temp);
        T--;

    }

}
