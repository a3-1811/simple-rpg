#include "inventory.h"
#include <iostream>

void Inventory::addItem(const Item &item)
{
  items.push_back(item);
  std::cout << item.getName() << " added to inventory.\n";
}

void Inventory::showInventory() const
{
  std::cout << "Inventory:\n";
  for (const auto &item : items)
  {
    std::cout << "- " << item.getName() << " (HP: " << item.getHpBoost() << ", Attack: " << item.getAttackBoost() << ")\n";
  }
}

int Inventory::getTotalHpBoost() const
{
  int totalHpBoost = 0;
  for (const auto &item : items)
  {
    totalHpBoost += item.getHpBoost();
  }
  return totalHpBoost;
}

int Inventory::getTotalAttackBoost() const
{
  int totalAttackBoost = 0;
  for (const auto &item : items)
  {
    totalAttackBoost += item.getAttackBoost();
  }
  return totalAttackBoost;
}
