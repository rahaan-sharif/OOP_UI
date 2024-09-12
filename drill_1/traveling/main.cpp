#include <iostream>
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
        void printwagons(train tr);
        int getsize(train tr);
};
int pushfront(train tr, int booked);
void printwagons(train tr);
int getsize(train tr);

int main(void){

    train tr;
    tr.size=0;
    tr.headwagon[0].bo=0;
    int voroodi=-2;
    cin>>voroodi;

    while(voroodi!=-3)
        {if(voroodi!=-1){
            tr.size=getsize(tr);
            tr.headwagon[tr.size].bo=pushfront(tr,voroodi);
            cin>>voroodi;}
         else if(voroodi==-1)
             {printwagons(tr);
              break;}}

    return 0;}


int getsize(train tr){return (++tr.size);}

void printwagons(train tr){
    for(int i=(tr.size); i>0; i--)
        cout<<tr.headwagon[i].bo<<endl;}

int pushfront(train tr,int booked){
    return booked;}

