#ifndef WINDOW_H
#define WINDOW_H

#pragma once
#include "../include/SFML-2.5.1/include/SFML/Graphics.hpp"

class Window
{

public:
    Window(int width, int height);
    Window();
    ~Window();
    bool isRunning();
    void pollEvents();
    void draw(sf::VertexArray vertexArray);
    void draw(sf::CircleShape shape);
    void clear();
    void clear(sf::Color);
    void display();

    sf::Vector2i size();

    int width;
    int height;

    bool isResized;

private:
    sf::RenderWindow *window;
};

#endif