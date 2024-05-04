#include <iostream>
#include <ctime>

int main()
{
    // 현재 시간을 가져옴
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = gmtime(&rawtime); // UTC+0 기준의 시간으로 변환

    // 연도, 월, 일을 출력
    std::cout << timeinfo->tm_year + 1900 << std::endl; // tm_year는 1900년부터의 연수를 나타내므로 1900을 더해줌
    std::cout << timeinfo->tm_mon + 1 << std::endl;     // tm_mon은 0부터 시작하므로 1을 더해줌
    std::cout << timeinfo->tm_mday << std::endl;

    return 0;
}
