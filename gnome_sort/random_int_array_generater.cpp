#include<bits/stdc++.h>
using namespace std;
int* my_array(int len,int max_number)
{

    int *a=new int[len];
    srand(time(NULL));
    for(int i=0;i<len;i++)
      {
          a[i]=1+rand()%max_number;
          //cout<<a[i]<<" ";
      }
    return a;
}
int main()
{
    int *x=my_array(10,25);
    for(int i=0;i<10;i++)
        cout<<*(x+i)<<" ";

	return(0);
}
