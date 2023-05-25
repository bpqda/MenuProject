#pragma once
#include <iostream>
#include "Dish.h"
#include <vector>
#include "Menu.h"
using namespace std;
class Creator {

public:
	Creator() {}

	Dish createDish() {

		Dish dish;

		cout << "Введите название: ";
		string name;
		cin >> name;
		dish.setName(name);

		cout << "Введите вес: ";
		int weight;
		cin >> weight;
		dish.setWeight(weight);

		cout << "Введите цену: ";
		int price;
		cin >> price;
		dish.setPrice(price);

		return dish;

	}

	Menu createMenu() {
		cout << "СОЗДАТЬ МЕНЮ" << endl;
		Menu menu;

		cout << "Введите название меню: ";
		string name;
		cin >> name;
		menu.setName(name);

		cout << "Введите количество блюд: " << endl;
		int n;
		cin >> n;
		vector <Dish> dishes;

		for (int i = 0; i < n; i++) {
			Dish dish = createDish();
			dishes.push_back(dish);
		}
		menu.setDishes(dishes);
		return menu;

	}

	Menu createDishInMenu(Menu menu) {
		cout << "СОЗДАТЬ БЛЮДО В МЕНЮ" << endl;
		cout << "Введите номер блюда (>0)" << endl;

		int index;
		cin >> index;

		Dish dish = createDish();

		vector <Dish> dishes = menu.getDishes();

		if (index < dishes.size()) {
			auto iter = dishes.cbegin();
			dishes.insert(iter + index - 1, dish);
		}
		else {
			dishes.push_back(dish);
		}

		menu.setDishes(dishes);
		return menu;
	}

};

