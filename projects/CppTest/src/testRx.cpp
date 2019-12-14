#include <stdio.h>
#include <rxcpp/rx-lite.hpp>
#include <rxcpp/operators/rx-take.hpp>

#include <rxcpp/rx-coroutine.hpp>

using namespace rxcpp;
using namespace rxcpp::sources;
using namespace rxcpp::operators;
using namespace rxcpp::util;

using namespace std;
using namespace std::chrono;

void runRxTest(){
    printf("Rx test\n");
}