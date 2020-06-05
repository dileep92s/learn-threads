#pragma once
#include <functional>
#include <iostream>
#include <iostream>

// typedef std::function<void(void)> _callback;

class ThreadB
{
    public:
    ThreadB();
    virtual ~ThreadB();
    void run();
    void update();
};