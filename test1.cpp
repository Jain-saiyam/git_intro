#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{int i,fact=1,num;
cout<<"Enter a Number";
cin>>num;
for(i=1;i<=num;i++)
{fact=fact*i;}
cout<<fact;
return 0;
}