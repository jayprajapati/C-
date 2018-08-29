#include<bits/stdc++.h>
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
    cout<<"Total Iteration : "<<mcount<<endl;
    display(a,n);
}

int main()
{
    int A[]={2,64,18,84,234,12,1,25,4,8};
    cout<<"Intial array is.."<<endl;
    display(A,10);
    cout<<"After Sorting.."<<endl;
    gnome_sort(A,10);
    return 0;
}
