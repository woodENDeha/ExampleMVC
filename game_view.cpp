//
// Created by dhyli on 24.03.2023.
//

#include "game_view.h"

void game_view::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout << "'Enter' = 1 point or 'space' = 2 points! 'Escape' button ends game!" << std::endl;
    std::cout << "Points: " << this->model.get_points() << std::endl;
}
game_view::game_view(game_model &model) : model(model) {

}
