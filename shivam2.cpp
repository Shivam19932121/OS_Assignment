#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;
class a
{
    public:
    int w,ta,b,c,ft;
    char n;
};
a return_candy(a st1[],int z,int y)
{
    for(int i=0;i<z;i++)
    {
        st1[i].c=rand();
    }
    for (int i = 0; i < z; i++)
    {
      int j, min;
      a temp;
      min = i;
      for (j = i + 1; j < 10; j++)
         if (st1[j].c < st1[min].c)
            min = j;
      temp = st1[i];
      st1[i] = st1[min];
      st1[min] = temp;
    }
    return st1[z];
}
int main()
{
    a st[10],c1;
    int time=0;
    cout<<"Give burst time\n";
    for(int i=0,j=97;i<10,j<107;i++,j++)
    {
        cin>>st[i].b;
        st[i].n=j;
        //st[i].c=rand();
        //cout<<st[i].c;
    }
    for(int i=9,j=0;i>=0,j<10;i--,j++)
    {
        c1=return_candy(st,i,time);
        time=time+c1.b;
        c1.ft=time;
        c1.ta=time;
        c1.w=c1.ta-c1.b;
        cout<<c1.n<<" "<<c1.b<<" "<<c1.ta<<" "<<c1.w<<" "<<endl;
    }


    return 0;
}

