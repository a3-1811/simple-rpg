#ifndef BOSS_H
#define BOSS_H

#include "character.h"

class Boss : public Character
{
public:
  Boss(const std::string &name, int hp, int attack);
};

#endif // BOSS_H
