#include <iostream>
#include "includes/editor.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "SFML works!", sf::Style::Close);

    sf::View main_view(sf::FloatRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT));
    sf::View misc_view(sf::FloatRect(0, 0, EDITOR_WIDTH, EDITOR_HEIGHT));
    sf::View file_view(sf::FloatRect(0, 0, FILE_HANDLER_WIDTH, FILE_HANDLER_HEIGHT));

    main_view.setViewport(sf::FloatRect(0,
                                        0,
                                        float(SCREEN_WIDTH) / WIDTH,
                                        float(SCREEN_HEIGHT) / HEIGHT));

    misc_view.setViewport(sf::FloatRect(float(SCREEN_WIDTH) / WIDTH,
                                        0,
                                        float(EDITOR_WIDTH) / WIDTH,
                                        float(EDITOR_HEIGHT) / HEIGHT));

    file_view.setViewport(sf::FloatRect(0,
                                        float(SCREEN_HEIGHT) / HEIGHT,
                                        float(FILE_HANDLER_WIDTH) / WIDTH,
                                        float(FILE_HANDLER_HEIGHT) /HEIGHT));

    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(150, 150));
    rect.setPosition(0, 0);
    rect.setFillColor(sf::Color::Red);

    Editor editor;
    sf::Texture texture;
    editor.add_texture(texture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            //Main view events
            window.setView(main_view);

            //misc view event
            window.setView(misc_view);

            //file handling events
            window.setView(file_view);
        }

        window.clear();

        //Draw the main view
        window.setView(main_view);

        //Draw the misc view
        window.setView(misc_view);

        //Draw the file view
        window.setView(file_view);

        window.display();

        Sleep(FPS);
    }

    return 0;
}
