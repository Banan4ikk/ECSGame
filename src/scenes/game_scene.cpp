#include <GameHeaders/scenes/game_scene.h>
#include <GameHeaders/Components/CollisionComponent.h>
#include <GameHeaders/Components/MoveComponent.h>
#include <GameHeaders/Components/TextureComponent.h>
#include <GameHeaders/Components/HealthComponent.h>
#include <GameHeaders/Components/PickUpComponent.h>
#include <GameHeaders/Components/CollisionComponent.h>
#include <GameHeaders/Components/PlayerControlComponent.h>


void GameScene::OnCreate() {
    {
        auto player = engine.GetEntityManager()->CreateEntity();
        player->Add<MoveComponent>();
        player->Add<HealthComponent>(30);
    }
}

void GameScene::OnRender() {

}

void GameScene::OnExit() {

}

GameScene::GameScene(Context *const ctx, const Controls &controls) : IScene(ctx), controls(controls){};
