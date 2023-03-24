//
// Created by dhyli on 24.03.2023.
//

#ifndef EXAMPLEMVC_GAME_VIEW_H
#define EXAMPLEMVC_GAME_VIEW_H

#include <iostream>
#include "game_model.h"

class game_view {

public:
    explicit game_view(game_model& model);
    void update();

private:

    game_model& model;

};


#endif //EXAMPLEMVC_GAME_VIEW_H
