#include<iostream>

using namespace std;
/***************************************************************************************************
	oooo	print out n-number by n-number cube 
	oooo	using 2 for loop
	oooo	hori-loop for printing o by n-times in horizoal line
	oooo	verti-loop for printing hori-loop then end line and do it n-times creating vertical line
***************************************************************************************************/
int main()
{
	int i,n,y;
	char a='O';
	cout<<"Cube printer\n";
	cout<<"Select your number= ";cin>>n;
	for(y=1;y<=n;y++)//vertical loop
	{
		for(i=1;i<=n;i++)//horizontal loop
		{
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
