#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int org_num=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }
    if(org_num==sum)
    {
        cout<<"\n Armstrong number";
    }
    else{
        cout<<"\n not an armstrong number";
    }
    return 0;
}