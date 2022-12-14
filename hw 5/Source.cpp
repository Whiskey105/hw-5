#include <iostream>
#include "VendingMachine.h"


int main()
{
	setlocale(LC_CTYPE, "rus");

	short slotCount = 0;


	do
	{
		std::cout << "������� ���������� ������ � �������� (������ 0):" << std::endl;
		std::cin >> slotCount;
	} while (slotCount <= 0);
	

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	
	machine->addSlot(slot); // �������� ���� ������� � �������

	std::cout << "����������� ������ ������: " << std::endl;
	std::cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
	return 0;
}