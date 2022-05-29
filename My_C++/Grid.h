#pragma once
#include <vector>



class Grid {
public:
	struct Node {
		int* positive_x = nullptr;
		int* negitive_x = nullptr;
		int* positive_y = nullptr;
		int* negative_y = nullptr;
		Node();
	};
	std::vector<int> x_axis;
	std::vector<int> y_axis;
	int	x_coordinates;
	int y__coordinates;

	Grid(std::vector < std::vector<int>>);
};