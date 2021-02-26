#include "EventLoop.h"
#include <SFML/Window.hpp>

EventLoop::EventLoop(KeysPressed callback) 
	: m_keyPressedCallBack{ callback } {
}

void EventLoop::Run() {
    while (true) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            break;

        std::vector<Key> keys;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            keys.emplace_back(Key::Left);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            keys.emplace_back(Key::Right);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            keys.emplace_back(Key::Up);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            keys.emplace_back(Key::Down);

        m_keyPressedCallBack(keys);
    }
}