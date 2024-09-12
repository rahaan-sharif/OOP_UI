#include <iostream>
using namespace std;

long long bmm(long long a, long long b){
    long long aa[10000]={0}, bb[10000]={0};
    int countera=0;

    for(int i=2; i<=a; i++)
        {if(a%i==0)
            {aa[countera++]=i;
             a/=i;
             i=1;}}

    int counterb=0;
    for(int i=2; i<=b; i++)
        {if(b%i==0)
            {bb[counterb++]=i;
             b/=i;
             i=1;}}

    long long moshtarak[10000]={0};
    int smallest=min(countera,counterb);
    int largest=max(countera,counterb);
    int shomare=0;

    long long koochik[1000]={0}, bozorg[1000]={0};
    if(smallest==countera)
        {for(int i=0; i<counterb; i++)
            {koochik[i]=aa[i];
             bozorg[i]=bb[i];}}
    else
        {for(int i=0; i<countera; i++)
            {koochik[i]=bb[i];
             bozorg[i]=aa[i];}}


    for(int i=0; i<smallest; i++)
        {for(int j=0; j<largest; j++)
            {if(koochik[i]==bozorg[j])
                {moshtarak[shomare++]=koochik[i++];
                 bozorg[j]=0;
                 j=0;}
                }}



    long long bmm=1;
    for(int i=0; moshtarak[i]!=0; i++)
        {bmm*=moshtarak[i];}


    return bmm;}


class fraction{
    public:
        long long soorat, makhraj;
        void voroodi(){cin>>soorat>>makhraj;}

};

void operation(fraction ob1, fraction ob2,long long* p){
     long long s=0, m=0;

     s=ob1.soorat*ob2.soorat;
     m=ob1.makhraj*ob2.makhraj;

     int tavazon=1;
     if(s<0)
        {tavazon*=-1;
         s*=-1;}
     if(m<0)
        {tavazon*=-1;
         m*=-1;}
     long long bemim=bmm(s,m);
     s=s/bemim;
     m=m/bemim;
     s*=tavazon;
     *p=s;
     *(p+1)=m;}


int main(void){
    int c=0;
    cin>>c;
    long long a[2]={0};
    long long *p=a;
    long long khorooji[100][2]={0};
    fraction ob1, ob2;

    for(int i=0; i<c; i++)
        {ob1.voroodi();
         ob2.voroodi();
         operation(ob1,ob2,p);
         khorooji[i][0]=*p;
         khorooji[i][1]=*(p+1);}
    for(int i=0; i<c; i++){
         if(khorooji[i][1]==1)
            cout<<khorooji[i][0]<<endl;

         else if(khorooji[i][1]==0)
            cout<<"INVALID"<<endl;
         else if(khorooji[i][0]==0)
            cout<<0<<endl;
         else
            cout<<khorooji[i][0]<<" "<<khorooji[i][1]<<endl;
        }

    return 0;}
