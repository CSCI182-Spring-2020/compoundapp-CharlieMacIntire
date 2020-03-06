#include "Element.h"
#include <iostream>

using namespace std;

// Constructor
Element::Element(string name, string symbol, int atomicNumber)
{
	_name = name;
	_symbol = symbol;
	_atomicNumber = atomicNumber;

}


// Print Element
void Element::PrintElement()
{
	cout << _name << endl; //"\t" << _symbol << "\t" << _atomicNumber << endl;
}
