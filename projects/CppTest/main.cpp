#include <stdio.h>
#include <typeinfo>
#include <rxcpp/rx-lite.hpp>
#include <rxcpp/operators/rx-take.hpp>

#include <rxcpp/rx-coroutine.hpp>

using namespace rxcpp;
using namespace rxcpp::sources;
using namespace rxcpp::operators;
using namespace rxcpp::util;

using namespace std;
using namespace std::chrono;

future<void> intervals(){

}

template <typename T, typename E>
auto add(T x, E y) -> decltype(x + y)
{
	return x + y;
}

void C11()
{
	
	auto x = add(1, 3.4);
	printf("C11 auto %f \n", x);
	
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int arrSum = 0;
	for(auto i: arr)
	{
		 arrSum += i;
	}
	printf("C11 range %d \n", arrSum);

	enum class Option{
		None, One, All
	};

	Option o = Option::None;
	printf("Enum type: %s \n", typeid(o).name());

	unique_ptr<int> p1(new int(1234));
	printf("p1 unique_ptr: %d %d \n", *p1.get(), p1.get());
	unique_ptr<int> p2 = move(p1);
	printf("p2 unique_ptr: %d %d \n", *p2.get(), p2.get());
	printf("p1 unique_ptr: %d \n", p1.get());

	auto p1_shared = make_shared<int>(1234);
	printf(
		"p1_shared shared_ptr: %d %d %d \n", 
		*p1_shared.get(), p1_shared.get(), p1_shared.use_count());
	shared_ptr<int> p2_shared = p1_shared;
	printf(
		"p2_shared shared_ptr: %d %d %d \n", 
		*p2_shared.get(), p2_shared.get(), p2_shared.use_count());

	weak_ptr<int> wp = p1_shared;
	{
		auto a = wp.lock();
		printf("From weak_ptr: %d \n", *a.get());
	}

	printf("wp expired %s \n", (wp.expired()?"true":"false"));
	p1_shared.reset();
	p2_shared.reset();
	printf("wp expired %s \n", (wp.expired()?"true":"false"));

	auto finded = find_if(
		begin(arr), end(arr), 
		[](int it) { return it % 2 == 0;}
		);
		printf("Finded odd: %d \n", *finded);
}

int main(int argc, char *args[])
{
	C11();
	printf("Hello world \n");
	return 0;
}
