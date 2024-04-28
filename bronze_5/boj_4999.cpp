#include <iostream>
#include <string>
using namespace std;

int main() {
    string jaehwan, doctor;
    cin >> jaehwan >> doctor;

    // 재환이가 낼 수 있는 "aah"의 길이가 의사가 요구하는 길이보다 크거나 같은지 비교
    if (jaehwan.length() >= doctor.length()) {
        cout << "go" << endl; // 가능하면 "go" 출력
    } else {
        cout << "no" << endl; // 불가능하면 "no" 출력
    }

    return 0;
}
