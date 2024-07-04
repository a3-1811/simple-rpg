#include "monster.h"

Monster::Monster(const std::string &name, int hp, int attack, int experienceReward)
    : Character(name, hp, attack), experienceReward(experienceReward) {}

int Monster::getExperienceReward() const
{
    return experienceReward;
}