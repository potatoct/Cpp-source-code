#include<iostream>
using namespace std;

int main()
{
	int i,n,y,x,m;
	char a='L';
	
	cout<<"Cube printer\n";
	cout<<"Select your number= ";cin>>n;
	cout<<endl;
	
	for(x=1;x<=n;x++) {
		for(m=1;m<=n-x;m++) 
			cout<<" ";
		
		for(m=1;m<=2*x-1;m++) 
			cout<<a;
	cout<<endl;
	}

	for(y=1;y<=n;y++)
	{

		if (y==1 || y==n) 
			for(i=1;i<=2*n-1;i++) cout<<a;	
			
		else
			for(i=1;i<=2*n-1;i++) {
				if (i==1 || i==2*n-2)
					cout<<a;
				cout<<" ";
			}
	cout<<endl;
	}
	
	cout<<endl;
	system ("pause");
	return 0;
}
