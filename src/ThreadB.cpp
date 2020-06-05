#include "ThreadB.hpp"

ThreadB::ThreadB(/* args */)
{
}

ThreadB::~ThreadB()
{
}

void ThreadB::run()
{
    std::cout << "ThreadB " << __func__ << std::endl;
}

void ThreadB::update()
{
    std::cout << "ThreadB " << __func__ << std::endl;
}