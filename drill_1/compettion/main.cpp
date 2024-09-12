#include <iostream>
#include <string.h>
using namespace std;

class wagon{
    public:
        int bo;};

class train{
    public:
        wagon headwagon[1000];
        int size;
    public:
        void pushfront(train tr, int booked);
        int getsize(train tr);
        bool popfront(train tr);
};

int pushfront(train tr, int booked);
int getsize(train tr);
bool popfront(train tr);

int main(void){

    train tr;
    tr.size=-1;
    tr.headwagon[0].bo=0;

    char matn[10]={0};
    cin>>matn;
    int voroodi=0;

    while(strcmp(matn, "Finish"))
        {if(!strcmp(matn, "Push"))
            {tr.size=getsize(tr);
             cin>>voroodi;
             tr.headwagon[tr.size].bo=pushfront(tr, voroodi);
             cin>>matn;}
         else if(!strcmp(matn, "Pop"))
             {tr.size--;
              cin>>matn;}}

    if(popfront(tr))
        cout<<"dare"<<endl;
    else if(!popfront(tr))
        cout<<"truth"<<endl;


    return 0;}


bool popfront(train tr){
    if((tr.headwagon[tr.size].bo)%2==1)
        {return (1);}
    else if((tr.headwagon[tr.size].bo)%2==0)
        {return (0);}}

int getsize(train tr){return (++tr.size);}

int pushfront(train tr,int booked){
    return booked;}
