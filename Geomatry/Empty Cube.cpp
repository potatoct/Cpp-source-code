#include<iostream>

using namespace std;
/*********************************
	oooo loop=n
	o  o ]print+(loop=n-2)+print
	o  o ]
	oooo loop=n
*********************************/
	int i,n,y;
	char a='O';
	int z=1;// for horizonal control*******************
void full()//loop=n*****************************
{
	for(i=1;i<=z*n;i++) cout<<a;
}

void empty()//print at first+last=2 fill space-2****
{
	cout<<a;
	for(i=1;i<=z*n-2;i++) cout<<" ";
	cout<<a;
}

int main()
{
	cout<<"Cube printer\n";
	cout<<"Select your number= ";cin>>n;
	for(y=1;y<=n;y++)//vertical loop********************
	{
		//top *******************************
		if (y==1) full();
		// mid *****************************
		else if (y<n) empty();
		// bottom *************************
		else full();
		cout<<endl;
	}
	return 0;
}
