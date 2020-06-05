#pragma once
#include <functional>
#include <vector>
#include <iostream>
#include "ThreadB.hpp"

// typedef std::function<void(void)> _callback;

class ThreadA
{
    std::vector<ThreadB> subscribers;

    public:
    ThreadA();
    virtual ~ThreadA();
    void run();
    void subscribe(ThreadB &obj);
    void notify();
};