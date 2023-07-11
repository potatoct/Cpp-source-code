#include<iostream>
#include<ctime>
#include<cstdlib>
#include<unistd.h>
#include<windows.h>

using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

	int l=5000,i=2,a,y;
	const char* x="=";
	int xi=40;
	
void cy(){
	SetConsoleTextAttribute(h,3);
}

void wh(){
	SetConsoleTextAttribute(h,7);
}

void gr(){
	SetConsoleTextAttribute(h,2);
}
	
void counter(){
	if (l>1) cout<<" points\n"; else cout<<" point\n";
}

void logic()
{
	int max=6,rng=0;
	
	srand (time(0));
	
	do {gr();
	
		cout<<"Welcome You have 5000 points\n";
		cout<<"Roll the dice to play...\n";
		cout<<"Each roll cost 500 points...\n";
		cout<<"Even win 1000 points... Odd lose and clear sreen...\n";
		cout<<"Press 0 to play\n";
		cout<<"Press any number to exist\n";
/*======*/cy(); for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
		cin>>a;
		
		rng=(rand()%max)+1;
		if (rng%2==1) system ("cls");
			
/*======*/cy(); for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
		sleep(1);
	wh();	
		cout<<l<<" points  -500 points\n";
	gr();
		l-=500;
		cout<<l; counter();
		if(rng%2==0) l=l+1000;
		cout<<rng;if (rng%2==1) cout<<" = Lose\n"; else cout<<" = Win      +1000 points\n";
		cout<<l; counter();
		
/*======*/cy(); for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";
		
	}while (a==0);
	
}

int main(){
	
/*======*/cy(); for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";

		logic();
	
	gr(); cout<<"Game Over\n";sleep(1);
	if (l>0){
		cout<<"You have "<<l; counter();
	}
	else {
		wh(); cout<<"You lose\n";
	}

/*======*/cy(); for (y=1;y<=xi;y++){cout<<x;}cout<<"\a\n";

	return system("pause");
}
