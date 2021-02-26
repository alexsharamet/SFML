#pragma once
#include <functional>
#include <vector>

enum class Key {
    Up, Down, Left, Right
};


class EventLoop {
public:
    using KeysPressed = std::function<void(std::vector<Key>)>;

    explicit EventLoop(KeysPressed callback);
    void Run();
private:
    KeysPressed m_keyPressedCallBack;
};