#include <iostream>
#include <string.h>

using namespace std;

class complex_num{
    public:
        double real,imagine;
        char oper, gong;
        complex_num()
            {cin>>real>>oper>>gong>>imagine;
             if (oper=='-')
                imagine*=-1;}

        void show(){cout<<"\n"<<real<<"  "<<oper<<"  "<<gong<<"  "<<imagine<<endl;}
};



void sum(complex_num ob1, complex_num ob2){
     double a=0, b=0;
     a=ob1.real+ob2.real;
     b=ob1.imagine+ob2.imagine;

     char sign='+';
     if(b<0)
        {sign='-';
         b*=-1;}

     cout<<a<<sign<<"i"<<b<<endl;


     }

void minu(complex_num ob1, complex_num ob2){
    double a=0, b=0;
    char sign='+';

    a=ob1.real-ob2.real;
    b=ob1.imagine-ob2.imagine;

    if(b<0)
        {b*=-1;
         sign='-';}

    cout<<a<<sign<<"i"<<b<<endl;

    }

void mul(complex_num ob1, complex_num ob2){
    double a=0, b=0;
    char sign='+';
    a=(ob1.real*ob2.real)-(ob1.imagine*ob2.imagine);
    b=(ob1.real*ob2.imagine)+(ob1.imagine*ob2.real);

    if(b<0)
        {sign='-';
         b*=-1;}
    cout<<a<<sign<<"i"<<b<<endl;}


int main(void){

    int counter=0;
    cin>>counter;
    for(int i=0; i<counter; i++){
        complex_num ob1, ob2;
        char operation[50]={0};
        cin>>operation;
        if(!(strcmp(operation,"min")))
            minu(ob1,ob2);
        else if(!(strcmp(operation,"mul")))
            mul(ob1,ob2);
        else
            sum(ob1,ob2);
    }



    return 0;}
