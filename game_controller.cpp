//
// Created by student on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {
}

void game_controller::launch() {
    this->view.update();
    int key;
    do {
        key = _getch();
        if (key == 13) {
            this->model.add_points(1);
            this->view.update();
        }
        if (key == 32) {
            this->model.add_points(2);
            this->view.update();
        }
    }
    while (key != 27);
}
