#include<iostream>
#include<ctime>		//for time
#include<cstdlib>
#include<unistd.h>	//for delay
using namespace std;
int main(){
	int max=6,rng=0,l=5000,i,n;
//use time as rng seed
	srand (time(0));
	cout<<"Welcome\n";
	cout<<"You have 5000 points\n";
	cout<<"How to play\n";
	cout<<"Roll the dice\n";
	cout<<"Each roll cost 500 points\n";
	cout<<"Even win 1000 points/Odd lose\n";
	cout<<"How many time do you want to roll? ";cin>>n;
	cout<<"Roll "<<n<<" time\n";
	cout<<"======================\n";
	for(i=1;i<=n;i++){
		rng=(rand()%max)+1;
		cout<<l<<" points  -500 points\n";
		l=l-500;
		cout<<l<<" points\n";
		if(rng%2==0) l=l+1000;
		cout<<rng;if (rng%2==1) cout<<"=Lose\n"; else cout<<"=Win        +1000 points\n";
		cout<<l<<" points\n";
		cout<<"======================\a\n";
		sleep(1);
	}
	return system("pause");
}
