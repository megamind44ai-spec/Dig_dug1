#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "PlayerMovement.h"


TEST_CASE("Player can move in all four directions"){

    //The grid size increases from left to right horizontally and increases from up to down

    float init_xPosition = 500;
    float init_yPosition = 500;

    PlayerMovement p(init_xPosition,init_yPosition); // set the player's position on the screen

    SUBCASE("Moves Left") {p.move(Direction::LEFT); CHECK(p.GetPlayerPosition().x < init_xPosition);}
    SUBCASE("Moves Right") {p.move(Direction::RIGHT); CHECK(p.GetPlayerPosition().x > init_xPosition);} //move back to original x position
    SUBCASE("Moves Up") {p.move(Direction::UP); CHECK(p.GetPlayerPosition().y < init_yPosition);}
    SUBCASE("Moves Down") {p.move(Direction::DOWN); CHECK(p.GetPlayerPosition().y > init_yPosition);} //move back to original y position

}

TEST_CASE("Player stays within the map's boarder"){

    SUBCASE("Player does not pass the screen's left boarder"){

        float edge_x_coordinate = 0;
        float edge_y_coordinate = 500; 
        PlayerMovement p(edge_x_coordinate,edge_y_coordinate); //put on the left edge of the screen
        p.move(Direction::LEFT); CHECK(p.GetPlayerPosition().x == edge_x_coordinate);
    }

    SUBCASE("Player does not pass the screen's right boarder"){

        
        float edge_x_coordinate = SCREEN_WIDTH - PLAYER_SIZE; // edge of the border calibrated with the player's size
        float edge_y_coordinate = 500; // generic y coordinate

            PlayerMovement p(edge_x_coordinate,edge_y_coordinate); //put on the left edge of the screen
        p.move(Direction::RIGHT); CHECK(p.GetPlayerPosition().x == edge_x_coordinate);
    }

    
    SUBCASE("Player does not pass the screen's upper boarder"){

        
        float edge_x_coordinate = 500; // generic x_coordinate
        float edge_y_coordinate = TOP_BORDER; // edge y coordinate

            PlayerMovement p(edge_x_coordinate,edge_y_coordinate); //put on the left edge of the screen
        p.move(Direction::UP); CHECK(p.GetPlayerPosition().y == edge_y_coordinate);
    }

    
    SUBCASE("Player does not pass the screen's lower boarder"){

        
        float edge_x_coordinate = 500; // genergic x_coordinate
        float edge_y_coordinate = BOTTOM_BORDER - PLAYER_SIZE; // edge y-coordinate

            PlayerMovement p(edge_x_coordinate,edge_y_coordinate); //put on the left edge of the screen
        p.move(Direction::DOWN); CHECK(p.GetPlayerPosition().y == edge_y_coordinate);
    }

    }
