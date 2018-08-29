#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void use_of_rand()
{   //everytime you compile this will generate same interger
    for(int i=0;i<5;i++)
        cout<<rand()<<endl;
}
void use_of_srand()
{   //The srand() function sets the starting point for producing a series of pseudo-random integers.
    //If srand() is not called, the rand() seed is set as if srand(1) were called at program start
    srand(time(NULL));
    for(int i=0;i<5;i++)
        cout<<rand()<<endl;
}
void generate_sentence(int words,int len_word)
{
    srand(time(NULL));
    int random_words=1+ rand()%words;

    for(int j=0;j<random_words;j++)
        {
            int temp_word=1+rand()%len_word;
            for(int k=0;k<temp_word;k++)
            {
                printf("%c",'a'+rand()%25);
            }
            cout<<" ";
        }
    cout<<endl;
}
int main()
{
    srand(time(NULL));
    cout<<"Use of rand()"<<endl;
    use_of_rand();
    cout<<"Use of srand()"<<endl;
    use_of_srand();
    cout<<"generate Sentence"<<endl;
    generate_sentence(15,9);

}

