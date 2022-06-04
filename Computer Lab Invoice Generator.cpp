#include <iostream>
#include <iomanip>
using namespace std;

// Defined constant for sales tax rate (San Jose)
#define SALES_TAX_RATE 0.09375

int main() {
	// Declare variables
	int numTables, numDellThinClients, numAllInOneClients, numKeyboards, numMice;
	double tableTotalPrice, dellThinClientTotalPrice, allInOneClientTotalPrice, keyboardTotalPrice, mouseTotalPrice, subtotal, tax, total;
	const double tableUnitPrice = 469.99;
	const double dellThinClientUnitPrice = 699.99;
	const double allInOneClientUnitPrice = 899.99;
	const double keyboardUnitPrice = 18.99;
	const double mouseUnitPrice = 16.99;
	
	// Input quantity of each product ordered
	cout << "How many 24 x 72 inch tables were ordered? ";
	cin >> numTables;
	cout << "How many Dell Dell thin clients were ordered? ";
	cin >> numDellThinClients;
	cout << "How many Dell All-in-One Thin Clients were ordered? ";
	cin >> numAllInOneClients;
	cout << "How many Dell Keyboards were ordered? ";
	cin >> numKeyboards;
	cout << "How many Dell mice were ordered? ";
	cin >> numMice;
	cout << "\n";
	
	// Calculate total prices
	tableTotalPrice = tableUnitPrice * numTables;
	dellThinClientTotalPrice = dellThinClientUnitPrice * numDellThinClients;
	allInOneClientTotalPrice = allInOneClientUnitPrice * numAllInOneClients;
	keyboardTotalPrice = keyboardUnitPrice * numKeyboards;
	mouseTotalPrice = mouseUnitPrice * numMice;
	
	// Output QTY, descriptions, unit prices, and total prices
	cout << setprecision(2) << fixed;
	cout << setw(3) << "QTY  " << setw(10) << "Description                  " << setw(10) << "Unit Price      " << "Total Price" << endl;
	cout << setw(3) << numTables << "  TABLES 24 X 72 INCH          " << setw(10) << tableUnitPrice << "      " << setw(11) << tableTotalPrice << endl;
	cout << setw(3) << numDellThinClients << "  DELL THIN CLIENTS            " << setw(10) << dellThinClientUnitPrice << "      " << setw(11) << dellThinClientTotalPrice << endl;
	cout << setw(3) << numAllInOneClients << "  DELL ALL-IN-ONE THIN CLIENTS " << setw(10) << allInOneClientUnitPrice << "      " << setw(11) << allInOneClientTotalPrice << endl;
	cout << setw(3) << numKeyboards << "  DELL KEYBOARD                " << setw(10) << keyboardUnitPrice << "      " << setw(11) << keyboardTotalPrice << endl;
	cout << setw(3) << numMice << "  DELL MOUSE                   " << setw(10) << mouseUnitPrice << "      " << setw(11) << mouseTotalPrice << endl;
	cout << "\n";
	
	// Calculate subtotal, tax, and total
	subtotal = tableTotalPrice + dellThinClientTotalPrice + allInOneClientTotalPrice + keyboardTotalPrice + mouseTotalPrice;
	tax = subtotal * SALES_TAX_RATE;
	total = subtotal + tax;
	
	// Output subtotal, tax, and total
	cout << "                    SUBTOTAL" << setw(15) << subtotal << endl;
	cout << "                         TAX" << setw(15) << tax << endl;
	cout << "                       TOTAL" << setw(15) << total << endl;
}
