#pragma once

#include "LayoutConstraints.hpp"
#include "ResolvedPanelPosition.hpp"

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class GuiComponent {
	public:
		GuiComponent(); 
		virtual ~GuiComponent();
		
		void setConstraints(LayoutConstraints* lc);

		int getMinimumHeight() const {
			return this->minimumHeight;
		}

		int getMinimumWidth() const {
			return this->minimumWidth;
		}

		virtual void onClick() {
			cout << "GuiComponent::onClick()" << endl;
		}

		virtual std::string toString() const;
	
		ResolvedPanelPosition pos{};
		LayoutConstraints layoutConstraints{};

		std::string rendererFunc;

		bool hasFocus = false;

	protected:
		int minimumHeight = 100;
		int minimumWidth = 200;
};
