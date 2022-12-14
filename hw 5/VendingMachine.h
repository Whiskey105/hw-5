#pragma once
#include <string>
#include <vector>

class Snack
{
public:
	Snack(std::string name);
	Snack(); // Error: no default constructor exists for class почему возникет только с эти классом?
	~Snack();

	std::string getSnackName();
	void setSnackName(std::string name);

private:
	std::string name;
};

class SnackSlot
{
public:
	SnackSlot(short slotSize);
	~SnackSlot();

	short getSnackSlotSize();
	void setSnackSlotSize(short slotSize);

	void addSnack(Snack* snack);

private:
	Snack snackInSlot;
	short slotSize;
	std::vector <Snack> snackList;
};

class VendingMachine
{
public:
	VendingMachine(short slotCount);
	~VendingMachine();

	short getSlotCount();
	void setSlotCount(short slotCount);

	void addSlot(SnackSlot* slot);

	short getEmptySlotsCount();

private:
	short slotCount;
	std::vector <SnackSlot> slotList;
};




