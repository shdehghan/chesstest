#include "board.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1100, 1000), "Chess", Style::Titlebar | Style::Close);
    Board board(&window);
    board.run();
}