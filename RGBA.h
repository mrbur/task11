#pragma once
#include <cstdint>
#include <iostream>

using namespace std;

class RGBA {
	private:
		uint8_t m_red=0, m_green=0, m_blue=0, m_alpha=255;
	public:
		RGBA(float m_red, float m_green, float m_blue, float m_alpha) : m_red(m_red), m_green(m_green), m_blue(m_blue), m_alpha(m_alpha) {

		}
		void print() {
			cout << "m_red = " << m_red;
			cout << "m_green = " << m_green;
			cout << "m_blue = " << m_blue;
			cout << "m_alpha = " << m_alpha;
		}
};