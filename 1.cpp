#include<iostream>

using namespace std;

int main()
{
    int num,n; 

   cout<<"Enter your number: ";
   cin>>num;
   
   if (num>10)
   {
       n = num+10;
   } 
   if (num<10)
   {
       n = num+5;
   }
   
   cout<<"your new output is "<<n;
   cout<<"\n\n";
   cout<<"Hope your calculation is success.";

    return 0;
}