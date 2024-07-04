#include "map.h"
#include <iostream>

void Map::showMap() const
{
  std::cout << "Map:\n";
  std::cout << "[P] -> Player\n";
  std::cout << "[M] -> Monster\n";
  std::cout << "[B] -> Boss\n";
}
