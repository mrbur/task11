#pragma once
#include <iostream>

using namespace std;

class Stack {
	private:
		const int maxSize;
		int* arr;
		size_t stackSize = 0;

	public:
		Stack() : maxSize(10) {
			arr = new int[maxSize];
		}
		~Stack() {
			delete[] arr;
		}
		void reset() {
			for (size_t i = 0; i < stackSize; i++) {
				arr[i] = 0;
			}
			stackSize = 0;
		}

		bool push(int val) {
			if (stackSize == maxSize) return false;
			arr[stackSize++] = val;
			return true;
		}

		int pop() {
			if (stackSize == 0) {
				cout << "Stack is empty";
			}
			else {
				return arr[stackSize--];
			}
		}

		void print() {
			cout << "(";
			for (size_t i = 0; i < stackSize; i++) {
				cout << " " << arr[i];
			}
			cout << " )";
		}
};