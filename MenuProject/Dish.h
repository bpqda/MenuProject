#pragma once
#include <iostream>
using namespace std;

class Dish {

private:
	string name;
	int weight;
	int price;

public:
	Dish(string dName = "", int dWeight = 0, int dPrice = 0) {
		name = dName;
		weight = dWeight; 
		price = dPrice;
	}

	void setName(string dName){
		name = dName;
	}
	void setWeight(int dWeight) {
		weight = dWeight;
	}
	void setPrice(int dPrice) {
		price = dPrice;
	}
	string getName() {
		return name;
	}
	int getWeight() {
		return weight;
	}
	int getPrice() {
		return price;
	}

};

