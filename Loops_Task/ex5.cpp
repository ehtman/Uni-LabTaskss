//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a, count, table;
cout<<"Enter a number";
cin>>a;
count=1;
while(count<=10)    
{
table=a*count;
cout<<a<<" * "<<count<<" = "<<table<<endl;
count++;

}
    return 0;
}