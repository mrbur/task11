#pragma once
#include <iostream>

using namespace std;

class Stack {
	private:
		const int n;
		int* arr;
		size_t arrSize = 0;

	public:
		Stack() : n(10) {
			arr = new int[n];
		}
		void reset() {
			for (size_t i = 0; i < arrSize; i++) {
				arr[i] = 0;
			}
			arrSize = 0;
		}

		bool push(int val) {
			if (arrSize == n) return false;
			arr[arrSize++] = val;
			return true;
		}

		int pop() {
			if (arrSize == 0) {
				cout << "Stack is empty";
			}
			else {
				return arr[arrSize--];
			}
		}

		void print() {
			cout << "(";
			for (size_t i = 0; i < arrSize; i++) {
				cout << " " << arr[i];
			}
			cout << " )";
		}
};