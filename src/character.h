#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "inventory.h"

class Character
{
public:
  Character(const std::string &name, int hp, int attack);
  virtual ~Character() = default;

  virtual void attack(Character &target);
  void takeDamage(int damage);
  bool isAlive() const;
  std::string getName() const;

  void addItemToInventory(const Item &item);
  void applyInventoryBonuses();
  Inventory getInventory() const;
  void showStats() const;

protected:
  std::string name;
  int baseHp;
  int currentHp;
  int baseAttackPower;
  int attackPower;
  Inventory inventory;
};

#endif // CHARACTER_H
