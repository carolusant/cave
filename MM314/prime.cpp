#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout <<"Give a numeber"<<endl;
	cin>>n;
	if (n%2==0 || n%3==0 || n%5==0 || n%7==0)
	{
		cout <<n<<" is Not Prime"<<endl;
	}
	else 
	{
		cout <<n<<" is Prime"<<endl;
	}
}
