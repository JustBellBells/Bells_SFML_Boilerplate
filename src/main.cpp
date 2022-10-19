#include "Window.hpp"

int main()
{
    // Initialize window
    Window window(1920, 1080);

    while (window.isRunning())
    {
        window.pollEvents();
        window.clear();
        window.display();
    }
}