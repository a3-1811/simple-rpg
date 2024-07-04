#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>
#include "item.h"

class Inventory
{
public:
  void addItem(const Item &item);
  void showInventory() const;
  int getTotalHpBoost() const;
  int getTotalAttackBoost() const;

private:
  std::vector<Item> items;
};

#endif // INVENTORY_H
