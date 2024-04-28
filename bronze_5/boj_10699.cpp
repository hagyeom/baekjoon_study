#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    // 현재 시간을 시스템 클록으로부터 얻기
    auto now = std::chrono::system_clock::now();
    
    // UTC+0에서 서울 시간대인 UTC+9로 변환하기 위해 9시간을 추가
    auto seoulTime = now + std::chrono::hours(9);
    
    // 시간을 time_t 타입으로 변환
    auto timeT = std::chrono::system_clock::to_time_t(seoulTime);
    
    // tm 구조체에 변환
    auto localTime = *std::localtime(&timeT);
    
    // 날짜를 YYYY-MM-DD 형식으로 출력
    std::cout << std::put_time(&localTime, "%Y-%m-%d") << std::endl;

    return 0;
}
