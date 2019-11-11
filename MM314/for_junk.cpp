#include<iostream>
using namespace std;
int n=5;
int main()
{
int k;
for(int i=0, j=8; i<j; i++, j--)
{
	k=-i+2*j;
	cout<<k<<endl;
}

return 0;
}
