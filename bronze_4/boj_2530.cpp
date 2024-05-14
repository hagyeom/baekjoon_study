#include <iostream>
using namespace std;

int main()
{
    int currentHour, currentMinute, currentSecond;
    int cookingTime;
    cin >> currentHour >> currentMinute >> currentSecond;
    cin >> cookingTime;
    int totalCurrentTime = currentHour * 3600 + currentMinute * 60 + currentSecond; // 현재 시각을 초 단위로 변환
    int totalEndTime = totalCurrentTime + cookingTime;
    // 1일은 24시간, 1시간은 3600초이므로 모듈러 연산을 통해 시, 분, 초 계산                            // 종료 시각
    int endHour = (totalEndTime / 3600) % 24;
    int endMinute = (totalEndTime / 60) % 60;
    int endSecond = totalEndTime % 60;
    cout << endHour << " " << endMinute << " " << endSecond;
    return 0;
}