#include <iostream>

using namespace std;
/* ***********************************************
this is a pyramid
---A		(2*1)-1=1
--BAB		(2*2)-1=3
-CBABC		(2*3)-1=5
DCBABCD		(2*4)-1=7********
-CBABC		(2*4-2*1)-1=5
--BAB		(2*4-2*2)-1=3
---A		(2*4-2*3)-1=1
*********************************************** */

	int i,u,n,y;
	char a='L';
	// lots of L make it seem like pixel+3D effect

int main()
{
	cout<<"Diamon Printer\n";
	cout<<"Select number of row= ";
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++)//vertical loop
	{//i start from 1 and continue to +1 untill i=n
		for(y=1;y<=n-i;y++)//horizontal spacing
		{//spacing=n-i and decreasing by1
			cout<<" ";
		}
		
		for(y=1;y<=2*i-1;y++)//horizontal print
		{//print number=(2*i)-1 and increasing by 2
			cout<<a;
		}
		cout<<endl;
	}
	
	for(u=1;u<=n;u++)//vertical loop
	{//i start from 1 and continue to +1 untill i=n
		for(y=1;y<=u;y++)//horizontal spacing
		{//spacing=n-i and decreasing by1
			cout<<" ";
		}
		
		for(y=1;y<=2*n-2*u-1;y++)//horizontal print
		{//print number=(2*i)-1 and increasing by 2
			cout<<a;
		}
		cout<<endl;
	
	}
	system("pause");
	return 0;
}
