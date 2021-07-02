#pragma once
#include <string>

using namespace std;

enum Gender {
	MALE = 0,
	FEMALE = 1
};

class Person {
	private:
		string name;
		unsigned int age;
		Gender gender;
		unsigned int weight;
	public:
		Person(string name, unsigned int age, Gender gender, unsigned int weight) : name(name), age(age), gender(gender), weight(weight) {

		}
		~Person() {

		}

		string getGender() const {
			return this->gender == 0 ? "MALE" : "FEMALE";
		}

		string getName() {
			return this->name;
		}

		unsigned int getAge() {
			return this->age;
		}

		unsigned int getWeight() {
			return this->weight;
		}

	protected:
		void setName(string newName) {
			this->name = newName;
		}

		void setAge(signed int newAge) {
			this->age = newAge;
		}

		void setWeight(signed int newWeight) {
			this->weight = newWeight;
		}
};