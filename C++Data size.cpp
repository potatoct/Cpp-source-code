#include <iostream>
#include <unistd.h>

	using namespace std ;

int main() {
	
	int bo = sizeof (bool)	;
	
	int ch = sizeof (char)	;
	
	int in = sizeof (int)	;
	int lo = sizeof (long)	;
	int sh = sizeof (short)	;
	int un = sizeof (unsigned)	;
	
	int fl = sizeof (float)	;
	int db = sizeof (double)	;
	int ld = sizeof (long double)	;
	
	sleep ( 1 ) ;
	
	int n , size = 50 ;
	for (n=0; n<size; n++) {cout<<"=";}
	cout << endl ;
	
	cout << "\t Data type and their byte size \n" ;
	
	for (n=0; n<size; n++) {cout<<"=";}
	cout << endl << endl ;
	
	sleep ( 1 ) ;
	
	const char* b=" btye ";
	const char* t=" bit ";
	
	cout << " Boolean == bool == " << endl ;
	cout << "\t" << bo << b <<endl ;
	cout << "\t" << bo*8 << t << endl << endl ;
	
	cout << " Character == char == " << endl ;
	cout << "\t" << ch << b <<endl ;
	cout << "\t" << ch*8 << t << endl << endl ;
	
	cout << " Interger == int == " << endl ;
	cout << "\t" << in << b <<endl ;
	cout << "\t" << in*8 << t << endl ;
	
	cout << " Long Interger == long == " << endl ;
	cout << "\t" << lo << b <<endl ;
	cout << "\t" << lo*8 << t << endl ;
	
	cout << " Short Interger == short == " << endl ;
	cout << "\t" << sh << b <<endl ;
	cout << "\t" << sh*8 << t << endl ;
	
	cout << " Unsigned Interger == unsigned == " << endl ;
	cout << "\t" << un << b <<endl ;
	cout << "\t" << un*8 << t << endl << endl ;
	
	cout << " Float == float == " << endl ;
	cout << "\t" << fl << b <<endl ;
	cout << "\t" << fl*8 << t << endl ;
	
	cout << " Double == double == " << endl ;
	cout << "\t" << db << b <<endl ;
	cout << "\t" << db*8 << t << endl ;
	
	cout << " Long Duoble == long double == " << endl ;
	cout << "\t" << ld << b <<endl ;
	cout << "\t" << ld*8 << t << endl << endl ;

	system ( " pause " ) ;
	return 0;
}
