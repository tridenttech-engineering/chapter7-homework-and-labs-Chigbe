//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;

	cout << "Bill amount: ";
	cin >> bill;

	double rate = 0.10;
	while (rate <= 0.20) 
	{
		tip = bill * rate;
		cout << rate * 100 << "% tip: ";
		cout << "$" << tip << endl;
		rate += 0.05;
	}   // end for
	return 0;
}
