//
// Created by Konstantin on 01.07.2021.
//

#ifndef GAME_TEXTURECOMPONENT_H
#define GAME_TEXTURECOMPONENT_H

#include <lib/ecs/component.h>

class TextureComponent : public IComponent{
public:
    char symbol;
    explicit
    TextureComponent(char symbol) : symbol(symbol) {}
};
#endif //GAME_TEXTURECOMPONENT_H
