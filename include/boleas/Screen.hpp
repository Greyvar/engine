#pragma once

#include <vector>

#include "GuiComponent.hpp"
#include "LayoutConstraints.hpp"

class Screen {
	protected:
		void add(GuiComponent* comp, LayoutConstraints* lc);

	public:
		std::vector<GuiComponent*> components{};
		std::string getPreviousScreenName();
		void onMouseMoved(int x, int y);
		void selectNextItem();
		void selectPrevItem();
		void executeCurrentItem();
		void onClick(int x, int y);
};
