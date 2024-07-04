#include "item.h"

Item::Item(const std::string &name, int hpBoost, int attackBoost)
    : name(name), hpBoost(hpBoost), attackBoost(attackBoost) {}

std::string Item::getName() const
{
  return name;
}

int Item::getHpBoost() const
{
  return hpBoost;
}

int Item::getAttackBoost() const
{
  return attackBoost;
}
