#include "VendingMachine.h"
#include <iostream>
#include <string>
#include <vector>

Snack::Snack(std::string name)
{
	this->name = name;
}

Snack::Snack()
{
}

Snack::~Snack()
{
}

std::string Snack::getSnackName()
{
	return std::string();
}

void Snack::setSnackName(std::string name)
{
}

SnackSlot::SnackSlot(short slotSize)
{
	this->slotSize = slotSize;
}

SnackSlot::~SnackSlot()
{
}

short SnackSlot::getSnackSlotSize()
{
	return this->slotSize;
}

void SnackSlot::setSnackSlotSize(short slotSize)
{
	this->slotSize = slotSize;
}

void SnackSlot::addSnack(Snack* snack)
{
	snackList.push_back(*snack);
}

VendingMachine::VendingMachine(short slotCount)
{
	this->slotCount = slotCount;
}

VendingMachine::~VendingMachine()
{
}

short VendingMachine::getSlotCount()
{
	return slotCount;
}

void VendingMachine::setSlotCount(short slotCount)
{
	this->slotCount = slotCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	if (slotList.size() < slotCount)
	{
		slotList.push_back(*slot);
	}
	else
	{
		std::cout << "Свободных слотов нет!" << std::endl;
	}

}

short VendingMachine::getEmptySlotsCount()
{
	int empty = slotCount - slotList.size();
	return empty;
}








