#include<iostream>
using namespace std;
int main ()
{
	int td,j,m,d,sm;
	cout<<"masukan Total Detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d;
}
