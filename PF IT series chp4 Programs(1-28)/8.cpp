//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    int total, day1, days, readed, remain;
cout<<"Enter total number of pages in book";
cin>>total;
cout<<"\n How many pages you read in one day?";
cin>>day1;
cout<<"\n For how many days you are reading?";
cin>>days;
   readed=day1*days; 
   remain=total-readed;
cout<<"\n You have readed "<<readed<<" pages";
cout<<"\n Remaining pages are : "<<remain;
    return 0;
}
