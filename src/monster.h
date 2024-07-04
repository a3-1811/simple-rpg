#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"

class Monster : public Character
{
public:
  Monster(const std::string &name, int hp, int attack, int experienceReward);
  int getExperienceReward() const;

private:
  int experienceReward;
};

#endif // MONSTER_H
