#pragma once
#include "Person.h"
#include <stdlib.h>

class Student : public Person {
	private:
		unsigned int educationYear;
		static unsigned int studentCount;
	public:
		Student(string name, unsigned int age, Gender gender,  unsigned int weight) : educationYear(1), Person(name, age, gender, weight) {
			studentCount++;
		}
		void setEducationYear(unsigned int year) {
			this->educationYear = year;
		}

		unsigned int getEducationYear() const {
			this->educationYear;
		}

		static unsigned int getStudentCount() {
			return studentCount;
		}

		void print() {
			cout << "Name: " << this->getName() << endl;
			cout << "Education year: " << this->educationYear << endl;
			cout << "Gender: " << this->getGender() << endl;
			cout << "Age: " << this->getAge() << endl;
			cout << "Weight: " << this->getWeight() << endl << endl << endl;
		}
};

unsigned int Student::studentCount = 0;