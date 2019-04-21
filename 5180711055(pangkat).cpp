#include<iostream>
using namespace::std;

double p(float angka,int pangkat)
{
if(pangkat==0) return 1;
else if (pangkat>=1)

    return angka*p(angka,pangkat-1);
else if (pangkat<=0)
    return 1 / angka*p(angka,pangkat+1);

}
main()
{
int a,b;
cout<<"\nangka yang dimasukkan : ";
cin>>a;
cout<<"\njumlah pangkat: ";
cin>>b;
cout<<p(a,b);

}
