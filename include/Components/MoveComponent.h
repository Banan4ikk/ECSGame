#ifndef GAME_MOVECOMPONENT_H
#define GAME_MOVECOMPONENT_H

#include <lib/ecs/component.h>
#include <lib/math/vec2.h>

class MoveComponent : IComponent {
public:
    Vec2 speed;
    explicit MoveComponent(Vec2 speed) : speed(speed) {}
};

#endif  // GAME_MOVECOMPONENT_H
