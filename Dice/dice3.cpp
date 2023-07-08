#include<iostream>
#include<ctime>		//for time
#include<cstdlib>
#include<unistd.h>	//for delay
using namespace std;
int main(){
	int max=6,rng=0,l=5000,i=0,a,y;
	const char* x="=";
	int xi=40;
//use time as rng seed
	srand (time(0));
	cout<<"Welcome\n";
	cout<<"You have 5000 points\n";
	cout<<"Rule...\n";
	cout<<"Roll the dice...\n";
	cout<<"Each roll cost 500 points...\n";
	cout<<"Even win 1000 points...\n";
	cout<<"Odd lose...\n";
	//====	
	for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
	while (i==0){
		cout<<"Press 0 to play\n";
		cout<<"Press any number to exist\n";cin>>a;
		//====	
		for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
		if (a==0){
			i=0;
			rng=(rand()%max)+1;
			sleep(1);
			cout<<l<<" points  -500 points\n";
			l=l-500;
			cout<<l; if (l<=1) cout<<" point\n"; else cout<<" points\n";
			if(rng%2==0) l=l+1000;
			cout<<rng;if (rng%2==1) cout<<"=Lose\n"; else cout<<"=Win        +1000 points\n";
			cout<<l<<" points\n";
			//====	
			for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
			}
		else i=1;
	}
	cout<<"Game Over\n";sleep(1);
	if (l>0){
		cout<<"You have "<<l;
		if (l<=1) cout<<" point\n"; 
		else cout<<" points\n";
	}
	else cout<<"You lose\n";
//====	
	for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
	return system("pause");
}
