
#include <iostream>
#include "Dish.h"
#include "Menu.h"
#include "Creator.h"
#include "Reader.h"
#include "Updater.h"
#include "Deleter.h"

int main()
{
	Updater updater;
	Deleter deleter;
	Reader reader;

	Menu menu;
	Creator creator;
	menu = creator.createMenu();

	cout << "\nДействия:\n\n 1.Добавить блюдо\n 2.Прочитать меню\n 3.Прочитать блюдо\n 4.Обновить блюдо\n 5.Удалить блюдо\n 6.Удалить все блюда из меню\n 7.Закончить программу\n\n";
	int action = 0;

	while (action != 7) {
		cout << "Выберите действие: ";
		cin >> action;

		switch (action)
		{ case 1:
			menu = creator.createDishInMenu(menu);
			break;
		case 2:
			reader.readMenu(menu);
			break;
		case 3:
			reader.readDish(menu);
			break;
		case 4:
			menu = updater.updateDish(menu);
			break;
		case 5:
			menu = deleter.deleteDish(menu);
			break;
		case 6:
			menu = deleter.deleteMenu(menu);
			break;
		default:
			break;
		}
	}

	return 0;

}


