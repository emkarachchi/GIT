#include<iostream>

using namespace std;

int main()
{
int temp[3]={1,2,0};
int n=0;
int tot=0;
int a, b, c;
while(true)
{

        temp[n+2]=temp[n+1]+temp[n];
        a=temp[n+2];
        temp[n]=temp[n+2]+temp[n+1];
        b=temp[n];
        temp[n+1]=temp[n]+temp[n+2];
        c=temp[n+1];
        n=0;


    if(temp[n]>=4000000)
    {
        break;
    }
    else if(temp[n+1]>=4000000)
    {
        break;
    }
    else if(temp[n+2]>=4000000)
    {
        break;
    }


    if(a%2==0)
        tot+=a;
    if(b%2==0)
        tot+=b;
    if(c%2==0)
        tot+=c;



}
 cout<<"Sum of Even Numbers : "<<tot<<endl;
    return 0;
}
