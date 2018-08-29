#ifndef GENERATE_ARRAY_H_INCLUDED
#define GENERATE_ARRAY_H_INCLUDED
int* gen_array(int len,int max_number)
{
    srand(time(NULL));
    int *a=new int[len];
    srand(time(NULL));
    for(int i=0;i<len;i++)
      {
          a[i]=1+rand()%max_number;
          //cout<<a[i]<<" ";
      }
    return a;
}


#endif // GENERATE_ARRAY_H_INCLUDED
