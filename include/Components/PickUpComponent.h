//
// Created by Константин on 01.07.2021.
//

#ifndef GAME_PICKUPCOMPONENT_H
#define GAME_PICKUPCOMPONENT_H

#include <lib/ecs/component.h>
class PickUpComponent : IComponent {
  int x;
  int y;
  explicit PickUpComponent(int x, int y) : x(x), y(y){};
};

#endif  // GAME_PICKUPCOMPONENT_H
