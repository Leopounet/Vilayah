#ifndef EDITOR_H_INCLUDED
#define EDITOR_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>

#include <SFML/Graphics.hpp>

#define PAGE_LINE 6         //Number of line on a page
#define SIZE_OF_NAME 200    //Size max of a name of a texture
#define FONT_SIZE 25
#define FONT "data/fonts/Crimson-Roman.ttf"
#define FONT_COLOR_R 255
#define FONT_COLOR_G 255
#define FONT_COLOR_B 255

#define WIDTH 1277                                      //width of the total screen
#define HEIGHT 950                                      //height of the total screen
#define EDITOR_WIDTH 477                                //width of the editor part of the screen
#define EDITOR_HEIGHT 800                               //height of the editor part of the screen
#define SCREEN_WIDTH 800                                //width of the playing part of the screen
#define SCREEN_HEIGHT 800                               //width of the playing part of the screen
#define FILE_HANDLER_WIDTH 1277                         //width of the file handler
#define FILE_HANDLER_HEIGHT 150                         //height of the file handler
#define FPS 1000 / 60                                   //frames that are displayed per seconds
#define SPRITE_SIZE 32                                  //size of a sprite (width and height)
#define MAP_WIDTH SCREEN_WIDTH / SPRITE_SIZE            //width of a map in sprites
#define MAP_HEIGHT SCREEN_HEIGHT / SPRITE_SIZE          //height of a map in sprites
#define NB_SIDE 8                                       //number of side of a map

enum Texture_name
{

};

/**
 * @brief Allows the user to edit maps.
 **/
class Editor
{
    public:
        /**
         * @brief Creates an empty editor.
         **/
        Editor();

        /**
         * @deprecated Usage of load_new_texture is possibly more adequate to your demand.
         * @brief Adds a texture to the list of textures.
         **/
        [[deprecated("oups")]]
        void add_texture(sf::Texture texture);


    private:
        std::vector<sf::Texture> m_textures_list;
        Texture_name m_current_texture;
};

#endif // EDITOR_H_INCLUDED
