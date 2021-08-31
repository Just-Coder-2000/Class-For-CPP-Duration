#include "handler.h"

namespace ns_test
{

    void foo()
    {
        // define a timer
        DurationTimer<std::chrono::milliseconds> timer;
        // initialize the timer
        timer.init();
        // do something : generate elems and push_back to vec
        std::vector<int> vec;
        for (int i = 0; i != 100000; ++i)
        {
            vec.push_back(i);
        }
        // output the period of the last duration
        std::cout << timer.lastDurStr() << std::endl;
        // do something : shuffle
        std::shuffle(vec.begin(), vec.end(), std::default_random_engine());
        // output the period of the last duration
        std::cout << timer.lastDurStr() << std::endl;
        // do something : sort
        std::sort(vec.begin(), vec.end());
        // output the period of the last duration
        std::cout << timer.lastDurStr() << std::endl;
        // output the period of the total duration
        std::cout << timer.totalDurStr() << std::endl;
        return;
    }

} // namespace ns_test
