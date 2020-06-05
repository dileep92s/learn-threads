
#include "Main.hpp"


void* threadA(void *arg)
{
    ThreadA *thA = reinterpret_cast<ThreadA*>(arg);

    while(true)
    {
        thA->run();
        sleep(1);
    }
    return NULL;
}

void* threadB(void *arg)
{
    ThreadB *thB = reinterpret_cast<ThreadB*>(arg);

    while(true)
    {
        thB->run();
        sleep(1);
    }
    return NULL;
}

int main()
{
    pthread_t th_a, th_b;
    char *errmsg = new char[128];
    
    ThreadA thA;
    ThreadB thB;
    
    thA.subscribe(thB);

    pthread_create(&th_a, NULL, threadA, &thA);
    perror(errmsg);
    std::cout << errmsg;

    pthread_create(&th_b, NULL, threadB, &thB);
    perror(errmsg);
    std::cout << errmsg;

    pthread_join(th_a,NULL);
    std::cout << "join complete\n";

    return 0;
}
