#include <iostream>
#include <cstdlib>
#include <chrono>
#include <string>



int bRand1(int MAX, int MIN = 0)
{
    std::string randIntTemp = "";
    int randInt = MAX + 1;
    uint64_t ms = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();
    srand(time(0) + ms);
    int lMAX = std::to_string(MAX).length();
    int lMIN = std::to_string(MIN).length();
    //! Infinite Loop Sparesly occuring in While()
    while(randInt >= MAX || randInt <= MIN)
    {
        std::string s = std::to_string(rand());
        randInt = 0;
        randIntTemp = "E";
        for(int j = 0; j < lMAX - 1; j++)
        {
            randIntTemp[j] = s[j+2];
        }
        randInt = std::stoi(randIntTemp);
        std::cout << "INFO Looped with Value: (" << randInt << ")" << std::endl;
    }    

    return randInt;
}
int main(int argc, const char** argv)
{
    for(int x = 0; x < 3; x++) std::cout << bRand1(100) << std::endl;
    return 0;
}
