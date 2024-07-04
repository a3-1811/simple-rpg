#include <iostream>
#include "character.h"
#include "monster.h"
#include "boss.h"
#include "item.h"
#include "inventory.h"
#include "map.h"

void gameLoop()
{
  Character player("Hero", 100, 20);
  Monster monster("Goblin", 50, 10, 30);
  Boss boss("Dragon", 150, 30);
  Inventory inventory;
  Map map;

  // Sample items
  Item sword("Sword", 0, 5);
  Item shield("Shield", 20, 0);

  player.addItemToInventory(sword);
  player.addItemToInventory(shield);

  bool gameRunning = true;
  while (gameRunning)
  {
    std::cout << "\n--- Game Menu ---\n";
    std::cout << "1. Show Map\n";
    std::cout << "2. Show Inventory\n";
    std::cout << "3. Show Stats\n";
    std::cout << "4. Fight Monster\n";
    std::cout << "5. Fight Boss\n";
    std::cout << "6. Exit\n";
    std::cout << "Choose an option: ";
    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
      map.showMap();
      break;
    case 2:
      player.getInventory().showInventory();
      break;
    case 3:
      player.showStats();
      break;
    case 4:
      std::cout << "Fight with Monster!\n";
      while (player.isAlive() && monster.isAlive())
      {
        player.attack(monster);
        if (monster.isAlive())
        {
          monster.attack(player);
        }
      }
      if (player.isAlive())
      {
        std::cout << "You defeated the monster!\n";
        Item monsterLoot("Monster Loot", 10 + monster.getExperienceReward(), 3);
        player.addItemToInventory(monsterLoot);
      }
      else
      {
        std::cout << "You were defeated by the monster.\n";
        gameRunning = false;
      }
      break;
    case 5:
      std::cout << "Fight with Boss!\n";
      while (player.isAlive() && boss.isAlive())
      {
        player.attack(boss);
        if (boss.isAlive())
        {
          boss.attack(player);
        }
      }
      if (player.isAlive())
      {
        std::cout << "You defeated the boss!\n";
        Item bossLoot("Boss Loot", 30, 10);
        player.addItemToInventory(bossLoot);
      }
      else
      {
        std::cout << "You were defeated by the boss.\n";
        gameRunning = false;
      }
      break;
    case 6:
      gameRunning = false;
      break;
    default:
      std::cout << "Invalid choice, please try again.\n";
      break;
    }
  }

  std::cout << "Game Over.\n";
}

int main()
{
  gameLoop();
  return 0;
}
