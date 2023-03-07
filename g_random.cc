#include <iostream>
#include <cstdlib>
#include <chrono>
#include <string>



int bRand(int MAX, int MIN = 0)
{
    std::string randIntTemp = "";
    int randInt = MAX + 1;
    uint64_t ms = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();
    srand(time(0) + ms);
    int lMAX = std::to_string(MAX).length();
    int lMIN = std::to_string(MIN).length();
    std::string s = std::to_string(rand());
    while(randInt > MAX || randInt < MIN)
    {
        randInt = 0;
        for(int j = 0; j < lMAX - 1; j++)
        {
            randIntTemp[j] = s[j];
        }
        randInt = std::stoi(randIntTemp);
    }    

    return randInt;
}
int main(int argc, char** argv)
{
    std::cout << bRand(100, 10) << std::endl;
    return 0;
}
