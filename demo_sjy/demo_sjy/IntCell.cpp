#include "stdafx.h"
#include "IntCell.h"

IntCell::IntCell(int initialVaule) :storedValue{ initialVaule }
{
}

int IntCell::read() const
{
	return storedValue;
}

void IntCell::write(int x)
{
	storedValue = x;
}