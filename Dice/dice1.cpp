#include<iostream>
#include<ctime>						//for time
#include<cstdlib>					//for time
#include<unistd.h>					//for delay
using namespace std;
int main(){
	float rng=0,l=0,i,n;			//because average need to be float
	int max=6;						//max must be in int
	srand (time(0));				//use time as rng seed
	cout<<"Roll the dice\n";
	cout<<"How many time do you want to roll? \a";cin>>n;
	cout<<"=================\n";
	for(i=1;i<=n;i++){
		rng=(rand()%max)+1;
		l=l+rng;
		cout<<rng;
		cout<<"\n=================\a\n";
		sleep(1);
	}
	cout<<"Total score "<<l;
	cout<<"\nAverage score "<<l/n;
	cout<<"\n=================\a\n";
	return system("pause");
}
