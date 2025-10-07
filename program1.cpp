using namespace std;
int main()
{
    int a=50;
    int *ptr;
    ptr=&a;
    cout<<"INTEGER"<<endl;
    cout<<"Address before increment:"<<ptr<<endl;
    ptr++;
    cout<<"Address after increment:"<<ptr<<endl;
    
    cout<<endl;
    cout<<"FLOAT";
    cout<<endl;
    float b=70.1f;
    float *bptr;
    bptr=&b;
    cout<<"Address before increment:"<<bptr<<endl;
    bptr++;
    cout<<"Address after increment:"<<bptr<<endl;
    cout<<endl;
    cout<<"DOUBLE";
    cout<<endl;

double c=23.34567;
    double *cptr;
    cptr=&c;
    cout<<"Address before increment:"<<cptr<<endl;
    cptr++;
    cout<<"Address after increment:"<<cptr<<endl;
    cout<<endl;
    cout<<endl;
   
}
/*Output:
INTEGER
Address before increment:0x7ffee04cb6d4
Address after increment:0x7ffee04cb6d8

FLOAT
Address before increment:0x7ffee04cb6d0
Address after increment:0x7ffee04cb6d4

DOUBLE
Address before increment:0x7ffee04cb6c8
Address after increment:0x7ffee04cb6d0

*/
