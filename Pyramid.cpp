#include <iostream>

using namespace std;
/*
this is a pyramid
---A		(2*1)-1=1
--BAB		(2*2)-1=3
-CBABC		(2*3)-1=5
DCBABCD		(2*3)-1=7

4row the first spacing is 3 (4-1)
then print A the next row 
	***space-1***
but 
	***A=(2*row number)-1***
and the loop continue
*/

int main()
{
	int i,n,y;
	char a='A';
	
	cout<<"Pyramid Printer\n";
	cout<<"Select number of hieght= ";
	cin>>n;
	
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
	return 0;
}
