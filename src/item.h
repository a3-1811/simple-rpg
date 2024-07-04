#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
  Item(const std::string &name, int hpBoost, int attackBoost);
  std::string getName() const;
  int getHpBoost() const;
  int getAttackBoost() const;

private:
  std::string name;
  int hpBoost;
  int attackBoost;
};

#endif // ITEM_H
