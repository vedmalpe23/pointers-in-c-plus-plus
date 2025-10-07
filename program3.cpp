#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int rarr[5];
    int *p=arr;
    int *q=rarr;
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<i+1<<": ";
    cin>>*(p+i);
    }
    cout<<"original array:";
    for(int j=0;j<5;j++)
    cout<<*(p+j)<<" ";
    cout<<endl;
    
    for(int k=0;k<5;k++)
    {
        *(q+k)=*(p+(4-k));
    }
    cout<<"reverse array:";
     for(int l=0;l<5;l++)
    cout<<*(q+l)<<" ";
}
/*output:
enter elements of array:
1: 2
2: 3
3: 4
4: 5
5: 6
original array:2 3 4 5 6 
reverse array:6 5 4 3 2 
  */
