#include "Grid.h"

Grid::Grid(std::vector<std::vector<int>> matrix) {
	this->x_axis = std::vector<int>(matrix.size(), 0);
	this->y_axis = std::vector<int>(matrix.begin()->size(),0);

}
