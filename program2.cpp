//difference/addition using pointers
#include<iostream>
using namespace std;
int main()
{
    int a,b,diff=0,add=0;
    cout<<"enter number 1:";
    cin>>a;
    cout<<"enter number 2:";
    cin>>b;
    int *aptr;
    int *bptr;
    aptr=&a;
    bptr=&b;
    diff=*aptr-*bptr;
    cout<<"difference of two numbers: "<<diff<<endl;
    add=*aptr+*bptr;
    cout<<"addition of two numbers: "<<add;
}
/*output:
enter number 1:23
enter number 2:5
difference of two numbers: 18
addition of two numbers: 28
*/
