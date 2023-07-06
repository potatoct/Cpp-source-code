#include <iostream>

using namespace std;

/* ************************************
1. max = -999999999;
2. input a number
3. if(number == -1) print max and stop;
4. if(number > max) max = number, loop to step 2
************************************ */

int main()
{
	int max=-999999999;
	int a=1, n;
	
	for(n=1;n>0;n++)
	{
		cout<<"A= ";cin>>a;
		if(a!=-1)
		{
			if(a>max)
			{
				max=a;
			}
		}
		else n=-1;
		
		cout<<"Max= "<<max<<"  \a";
	}

	return 0;
}
