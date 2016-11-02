//Tammy Gibson
//COP2000.0M1 
//Calculator for gratuity on bill. Will result in total of bill with tax and gratuity

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;	

/************************************
Class
************************************/
// Tips class declaration
class Tips
{
private:
	double taxRate;          // This is a member variable.

public:
	Tips(double t)         // One parameter constructor.
	{
		if (t > 0)
			taxRate = t;
		else
			taxRate = 6.5;   //started default as a percent due to conversion to decimal in calculation
	}
	double computeTip(double totalBill, double tipRate)  //function to compute tip
	{
		double preTaxBill,Tip;

		tipRate = (tipRate / 100.0);
		preTaxBill = (totalBill - (totalBill * (taxRate / 100.0)));
		Tip = (preTaxBill * tipRate);
		return Tip;
	}
};

void welcome();		//prototype welcome function

/************************************
Begin Main
************************************/

int main()
{
	double tax_rate;
	double tip_rate;
	double billTotal;
	double tipAmount;
	char ch;

	// Call welcome function
	welcome();
	
	// Call the setTaxRate function 
	cout << "\nWhat percent is the tax rate? ";
	cin >> tax_rate;
	Tips calculateTips(tax_rate);        // This sets object calculateTips and passes meal's taxRate
	
	//setting initialization of loop to yes
	ch = 'Y';
	
	//begin loop
	do
	{
		cout << "\nEnter total bill amount: $";
		cin >> billTotal;

		cout << "\nWhat percent is the tip rate? ";
		cin >> tip_rate;

		//validate data
		if (billTotal < 0 || tip_rate < 0)
			cout << "\nBill total or tip rate cannot be less than 0.\n"
			     << "Please try again.";
		else
		{
			//call computeTip method of calculateTip object of Tips class to get tip
			tipAmount = calculateTips.computeTip(billTotal, tip_rate);
			cout << fixed << setprecision(2);
			cout << "\nWith a tip rate of " << tip_rate << "%\n" 
				 << "and a total bill of $" << billTotal 
				 << "\nthe tip amount is $" << tipAmount << ".\n" << endl;

			cout << "\nWould you like to calculate another bill?\n";
			cout << "\nEnter 'Y' to continue or 'N' to exit.\n";
			cin >> ch;
		}
	// user decides to run program again
	} while (ch == 'Y' || ch == 'y');

	return 0;
}
/************************************
Functions
************************************/
void welcome()		//state purpose of program to user
{
	string stars;   //output formating
	stars.assign(45, '*');

	cout << "\n" << stars << endl;
	cout << "Gratuity Calculator\n" << endl;
	cout << endl << stars << endl;

	cout << "\nThis program will calculate gratuity\n";
	cout << "based on the tax rate entered, tipping rate entered\n";
	cout << "and the total amount of the bill.\n" << endl;
}
	
