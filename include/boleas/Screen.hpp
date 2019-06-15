#pragma once

#include <vector>

#include "gui/components/GuiComponent.hpp"
#include "gui/layout/LayoutConstraints.hpp"

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
