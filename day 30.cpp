#include<iostream>
using namespace std;
int main()
{
    char str[10];
    int i,n=0;
    cout<<"enter string = ";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        n++;
    }
    cout<<"string length = "<<n;
    return 0;
}
