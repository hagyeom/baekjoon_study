#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 한글의 유니코드 시작 지점
    int unicode_start = 0xAC00;

    // 중성, 종성의 개수
    int num_medials = 21;
    int num_finals = 28;

    // 1-based N을 0-based로 변경
    N -= 1;

    // 초성, 중성, 종성 인덱스 계산
    int initial_index = N / (num_medials * num_finals);
    int medial_index = (N % (num_medials * num_finals)) / num_finals;
    int final_index = N % num_finals;

    // 유니코드 계산
    int unicode_value = unicode_start + (initial_index * num_medials * num_finals) + (medial_index * num_finals) + final_index;

    // UTF-8로 변환하여 출력
    char utf8_char[4]; // UTF-8 문자열을 저장할 배열 (최대 4바이트, 마지막은 널 문자)
    utf8_char[0] = 0xE0 | ((unicode_value >> 12) & 0x0F);
    utf8_char[1] = 0x80 | ((unicode_value >> 6) & 0x3F);
    utf8_char[2] = 0x80 | (unicode_value & 0x3F);
    utf8_char[3] = '\0'; // 널 문자 추가

    // UTF-8 문자열 출력
    cout << utf8_char << endl;

    return 0;
}
