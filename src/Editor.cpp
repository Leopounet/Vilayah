#include "../includes/Editor.h"

Editor::Editor()
{

}

void Editor::add_texture(sf::Texture texture)
{
    m_textures_list.push_back(texture);
}
