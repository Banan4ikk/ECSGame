//
// Created by Константин on 01.07.2021.
//

#ifndef GAME_COLLISIONCOMPONENT_H
#define GAME_COLLISIONCOMPONENT_H

#include <lib/ecs/component.h>
class CollisionComponent : IComponent {
  int x;
  int y;
public:
    CollisionComponent(int x, int y) : x(x), y(y) {}
};

#endif  // GAME_COLLISIONCOMPONENT_H
