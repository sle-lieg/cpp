#include <ncurses.h>
#include <chrono>
#include <iostream>
#include <thread>

 int main()
{
	std::chrono::time_point<std::chrono::steady_clock> start = std::chrono::steady_clock::now();
	std::chrono::time_point<std::chrono::steady_clock> end = std::chrono::steady_clock::now();

	while(true)
	{
		uint j = 0;
		start = std::chrono::steady_clock::now();
		for (int i = 0; i < 10000000; ++i)
			j+=10; // replace game logics
		end = std::chrono::steady_clock::now();
		std::chrono::milliseconds diff = std::chrono::duration_cast<std::chrono::milliseconds>(start - end);
		std::cout << diff.count() << std::endl;
		if (diff.count() < 200)
		{
		}
	}


	// int interval_fps = 1000 / 30;

	// while(true)
	// {
	// 	if ()
	// 	//game logics
	// }
}