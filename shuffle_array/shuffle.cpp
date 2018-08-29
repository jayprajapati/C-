#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void swap (int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void shuffle_array(int a[],int n)
{
    srand(time(NULL));
    for (int i=n-1;i>0;i--)
    {
        int j=rand()%(i+1);
        swap(&a[i],&a[j]);
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
    cout<<endl;
}
int main()
{
    int A[]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++)
    {
        cout<<"Shuffling Array for "<<i+1<<" time.."<<endl;
        shuffle_array(A,sizeof(A)/sizeof(A[0]));
        display(A,sizeof(A)/sizeof(A[0]));
        cout<<endl;
    }

}

