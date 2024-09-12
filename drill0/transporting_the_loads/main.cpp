#include <iostream>
using namespace std;

void vorood(int *pp, /*int* pp,*/ int n){

     for(int i=0; i<(n-1); i++)
    {
        for(int j=0; j<(n-1-i); j++)
            {cin>>*(pp+(i*(n-1)+j));
            /**(p+(i*(n-1)+j))-=48;*/}
    }
    /*for(int i=0; i<1000; i++)
    {
        *(pp+i)=*(p+i);
    }*/
    }


int main(void){

    int n=0;
    cin>>n;

    char a[1000]={0};
    int aa[1000]={0};

    char *p;
    p=a;
    int *pp;
    pp=aa;

    vorood(pp,n);

    int satr=0, sotoon=0;
    int ii=0, jj=0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n-i); j++)
        {
            if (aa[(i*(n-1))+j]>=aa[(satr*(n-1))+sotoon])
            {
                satr=i;
                ii=i;
                jj=j;
                sotoon=j;
            }
        }

    }

    sotoon=sotoon+satr+2;
    satr++;


    cout<<satr<<" "<<sotoon<<endl;
    cout<<aa[(ii*(n-1))+jj]<<endl;

    return 0;}
