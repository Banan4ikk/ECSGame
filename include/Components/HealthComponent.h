//
// Created by Константин on 01.07.2021.
//

#ifndef GAME_HEALTHCOMPONENT_H
#define GAME_HEALTHCOMPONENT_H

#include <lib/ecs/component.h>

class HealthComponent: IComponent {
  int MaxHP;
  explicit HealthComponent(int maxHp) : MaxHP(maxHp) {};
};

#endif  // GAME_HEALTHCOMPONENT_H
