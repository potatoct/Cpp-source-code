#include<iostream>
#include<ctime>		//for time
#include<cstdlib>
#include<unistd.h>	//for delay
using namespace std;
int main(){
	int max=6,rng=0,l=0,i,n;
//use time as rng seed
	srand (time(0));
	cout<<"Roll the dice\n";
	cout<<"How many time do you want to roll? ";cin>>n;
	cout<<"======================\n";
	for(i=1;i<=n;i++){
		rng=(rand()%max)+1;
		if(rng%2==0) l=l+rng; else l=l-rng;
		cout<<"Even win/Odd lose\n";
		cout<<rng;if (rng%2==1) cout<<"=Lose\n"; else cout<<"=Win\n";
		cout<<l;if (l<=1) cout<<" point\a\n"; else cout<<" points\a\n";
		cout<<"======================\a\n";
		sleep(1);
	}
	cout<<"Total "<<l;if (l<=1) cout<<" point\a\n"; else cout<<" points\a\n";
	cout<<"======================\a\n";
	return system("pause");
}
