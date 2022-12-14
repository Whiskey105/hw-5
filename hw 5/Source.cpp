#include <iostream>
#include "VendingMachine.h"


int main()
{
	setlocale(LC_CTYPE, "rus");

	short slotCount = 0;


	do
	{
		std::cout << "Введите количество слотов в аппарате (больше 0):" << std::endl;
		std::cin >> slotCount;
	} while (slotCount <= 0);
	

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	std::cout << "Колитчество пустых слотов: " << std::endl;
	std::cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
	return 0;
}