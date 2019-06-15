#include "Screen.hpp"
#include "GridCell.hpp"
#include "GridLineProperties.hpp"

#include <map>

class LayoutManager {
	public: 
		void doLayout(Screen* screen);
		void onChanged(Screen* screen);

		void debugLayout() const;
		void applyLayoutToComponents(Screen* screen);

		map<int, GridLineProperties> rowProperties;
		map<int, GridLineProperties> colProperties;

	private:
		int windowPadding = 32;

		Screen* lastScreen = nullptr;
};
