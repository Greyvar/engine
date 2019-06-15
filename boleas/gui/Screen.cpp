#include "Screen.hpp"

std::string Screen::getPreviousScreenName() { 
	return "noprev";
}

void Screen::onMouseMoved(int x, int y) {
	std::cout << "on mm" << x << ":" << y << std::endl;
}

void Screen::selectNextItem() {}
void Screen::selectPrevItem() {}
void Screen::executeCurrentItem() {}
void Screen::onClick(int x, int y) {
	std::cout << "onclick" << x << ":" << y << std::endl;
}

