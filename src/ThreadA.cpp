#include "ThreadA.hpp"

ThreadA::ThreadA(/* args */)
{
}

ThreadA::~ThreadA()
{
}

void ThreadA::run()
{
    std::cout << "ThreadA " << __func__ << std::endl;
    notify();
}

void ThreadA::subscribe(ThreadB &obj)
{
    std::cout << "ThreadA " << __func__ << std::endl;

    subscribers.push_back(obj);
}

void ThreadA::notify()
{
    std::cout << "ThreadA " << __func__ << std::endl;

    for(auto subs: subscribers)
    {
        subs.update();
    }
}