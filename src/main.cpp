#include <iostream>

#include "EventLoop.h"

void OnKeyPressed(std::vector<Key> keys) {
	for (auto key : keys) {
		switch (key) {
			case Key::Up:
				std::cout << "Up" << std::endl;
				break;
			case Key::Down:
				std::cout << "Down" << std::endl;
				break;
			case Key::Left:
				std::cout << "Left" << std::endl;
				break;
			case Key::Right:
				std::cout << "Right" << std::endl;
				break;
			default:
				std::cout << "Unknown key" << std::endl;
		}
	}
}

int main()
{
    EventLoop loop(OnKeyPressed);
    loop.Run();

	//Lab4 https://www.sfml-dev.org/tutorials/1.6/window-events.php

    return 0;
}