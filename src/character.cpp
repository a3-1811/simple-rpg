#include "character.h"

Character::Character(const std::string &name, int hp, int attack)
    : name(name), baseHp(hp), currentHp(hp), baseAttackPower(attack), attackPower(attack) {}

void Character::attack(Character &target)
{
    std::cout << name << " attacks " << target.getName() << " for " << attackPower << " damage!\n";
    target.takeDamage(attackPower);
}

void Character::takeDamage(int damage)
{
    currentHp -= damage;
    std::cout << name << " takes " << damage << " damage and has " << currentHp << " HP left.\n";
}

bool Character::isAlive() const
{
    return currentHp > 0;
}

std::string Character::getName() const
{
    return name;
}

void Character::addItemToInventory(const Item &item)
{
    inventory.addItem(item);
    applyInventoryBonuses();
}

Inventory Character::getInventory() const
{
    return inventory;
}

void Character::applyInventoryBonuses()
{
    currentHp = baseHp + inventory.getTotalHpBoost();
    attackPower = baseAttackPower + inventory.getTotalAttackBoost();
}

void Character::showStats() const
{
    std::cout << name << ": "
              << "Health=" << currentHp << " "
              << "Attack=" << attackPower << std::endl;
}