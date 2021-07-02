#pragma once
#include <string>
using namespace std;

class Fruit {
	private:
		string name;
		string color;

	public:
		Fruit(string name, string color) : name(name), color(color) {
		}

		string getName() const {
			return this->name;
		}

		string getColor() const {
			return this->color;
		}
};

class Apple : public Fruit {
	public:
		Apple(string color) : Fruit("apple", color) {
		}

		Apple(string name, string color) : Fruit(name + "apple", color) {
		}
};

class GrannySmith : public Apple {
	public:
		GrannySmith() : Apple("Granny Smith ", "green") {
		}
};

class Banana : public Fruit {
	public:
		Banana() : Fruit("banana ", "yellow") {
		}
};