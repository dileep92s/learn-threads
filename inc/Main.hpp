#pragma once

#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "ThreadA.hpp"
#include "ThreadB.hpp"

void* threadA(void *arg);
void* threadB(void *arg);
