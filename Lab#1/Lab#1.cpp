
#include<iostream>
using namespace std;
void func(int x);
void stars();
bool isPrime(int x);
int sum(int x);
int sumCounter(int x);
void multiplicationTables(int x);
void multiplicationTablesAll();
void collatz();
void leapYearCalculator();
void starPattern(int x);
void collatzRangeTest(int x, int y);

int main(){
	cout <<"Hello World"<< endl; // Accomplishes problem #1
	stars();
	isPrime(100);//isPrime Test#1
	isPrime(111);//isPrime Test#2
	isPrime(7);//isPrime Test#3
	stars();
	sum(300);
	stars();
	sumCounter(100000);
	stars();
	multiplicationTables(3);
	stars();
	multiplicationTablesAll();
	stars();
	collatz();
	stars();
	leapYearCalculator();
	stars();
	starPattern(6);
	starPattern(7);
	starPattern(5);
	stars();
	collatzRangeTest(7, 11);

	}

	void stars(){
		cout <<"*************************"<< endl;
	}
	bool isPrime(int x){

		int i = 2;
		int k = 0;
		bool a = false;
		while (i<=(x/2)) {
			k = x%i;
			if (k==0){
				a= true;
				cout << "That number is not Prime" << endl;
				break;
			}
			i++;
		}
		if (k != 0){
			cout << "That number is Prime" << endl;
			a= false;
		}
		return a;
 }

	int sum(int x){
		int k =0;
		for (int i = 0; i<=x; i++){
			k=k+i;
			if ((i%20) == 0)
			{
				cout << "sum of "<< i<< " = "<< k << endl;
			}
		}
	}

	int sumCounter(int x){
		int i=0;
		int k = 0;
		while (k<x)
		{
			k=i+k;
			i++;
		}
		cout << i << endl;
		return i;
	}
	void multiplicationTables(int x){
			for (int i = 1; i<13; i++){
				cout << i << " x " << x << " = " << x*i << endl;

			}
	}
	void multiplicationTablesAll(){
		for (int i = 1; i<13; i++){
			multiplicationTables(i);
		}
	}
	void collatz(){
		int x=0;
		cout <<"Enter a number "<< endl;
		cin>>x;
		int i = 0;
while (x!=1){
		if( x%2 == 0){
			x= x/2;
			i++;
		}
		if( x%2 == 1 && x!=1){

			x = x*3 +1;
			i++;
		}
	}

	cout<<"number of cycles = "<<i<<endl;

	}

	void leapYearCalculator(){
		int year = 2017;

		while(year<2417){
			if(year%4==0){
				if(year%100 != 0){
					cout<< year << endl;
				}
				if (year%100 == 0 && year%400 == 0)
					cout<< year << endl;
			}
			year++;
		}
	}
	void starPattern(int x){
		if (x%2==0){
			x=x+1;
		}
		int m=2*x-2;
		for (int i=0; i<=m; i++){
		for (int k=0;k<=m;k++){
			if (k==i || k==(m-i)){
				cout<<"*";
				}
			else
				cout<<" ";
			}
		cout<< endl;
	}
	}
	void collatzRangeTest(int x, int y){
		while (x<=y){
			int i=x;
			while (i!=1){
					if( i%2 == 0){
						i= i/2;
					}
					if( i%2 == 1 && i!=1){
						i = i*3 +1;
					}
				}
			cout<< x << "-" <<"Collatz Conjecture is still working"<<endl;
			x++;
		}
	}




