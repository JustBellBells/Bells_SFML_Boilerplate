#include "Window.hpp"

// Default Resolution
const int width(1920);
const int height(1080);

int main()
{
    // Initialize a window with our defined resolution
    Window window(width, height);

    // Main loop
    while (window.isRunning())
    {
        window.pollEvents();
        window.clear();
        window.display();
    }
}