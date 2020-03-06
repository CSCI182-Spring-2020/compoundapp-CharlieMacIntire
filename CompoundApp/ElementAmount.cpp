#include "ElementAmount.h"
#include "Element.h"
#include <iostream>

using namespace std;


//Constructor

ElementAmount::ElementAmount(string name, string symbol, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);

}


ElementAmount::~ElementAmount()
{
	if (_element != NULL)
		delete _element;
}

void ElementAmount::PrintElementAmount()
{
	_element->PrintElement();
	cout << "Atoms: " << _atomCount << endl;
}

void ElementAmount::AddElementAmount(string name, string symbol, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);
}
