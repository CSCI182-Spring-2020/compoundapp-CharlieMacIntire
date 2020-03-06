
#include <iostream>
#include "Compound.h"

using namespace std;

//Constructor
Compound::Compound(int nNumberElements)
{
	index = nNumberElements;
	_elementAmount = new ElementAmount[nNumberElements];
	maxElements = nNumberElements;

}
Compound::~Compound()
{
	if (_elementAmount != NULL)
		delete [] _elementAmount;

}


void Compound::AddElement(string name, string symbol, int atomicWeight, int atomCount)
{
	if (index < maxElements)
	{
		_elementAmount[index].AddElementAmount(name, symbol, atomicWeight, atomCount);
		index++;
	}
}
Compound::Compound(const Compound& oldCompound) {
	_elementAmount = new ElementAmount[];
	for (int i = 0; i < maxElements; i++)
		_elementAmount[i] = oldCompound._elementAmount[i];

}

Compound& Compound::operator=(const Compound& oldCompound) {
	Compound = new ElementAmount(oldCompound._elementAmount->AddElementAmount);
	return *this;
}


void Compound::Print()
{
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i].PrintElementAmount();
	}
}

