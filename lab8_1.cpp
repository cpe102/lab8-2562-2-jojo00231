#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	float loan,rpery,canp,pery,total,balan ;

	cout << "Enter initial loan: " ;
	cin >> loan ;
	cout << "Enter initial rate per year (%): " ;
	cin >> rpery ;
	cout << "Enter amount you can pay per year: " ;
	cin >> canp ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	int i = 1 ;
	while(loan>0){
		
		
		
		pery = loan*(rpery/100);
		total = loan+pery ;
		
		if(loan<canp){
			canp=total;
		}
		
		balan = total-canp ;
		
		

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << pery;
		cout << setw(13) << left << total;
		cout << setw(13) << left << canp;
		cout << setw(13) << left << balan;
		cout << "\n";	

		loan = balan ;
		i++ ;
	}

	return 0;
}
