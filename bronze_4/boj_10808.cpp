// 백준 10808번: 알파벳 개수
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    // 각 알파벳의 개수를 저장할 벡터(a부터 z까지 26개의 요소를 가짐)
    vector<int> alphabet_count(26, 0);

    // 문자열 s를 순회하며 각 알파벳의 개수를 센다
    for (char ch : s)
    { // 해당 문자의 인덱스를 계산('a'를 0으로 맞추기 위해 'a'의 아스키 코드 값을 뺌)
        int index = ch - 'a';
        alphabet_count[index]++; // 해당 인덱스의 값을 1 증가
    }

    // 결과 출력
    for (int count : alphabet_count)
    { // alphabet_count 벡터의 모든 요소를 순회하며 공백으로 구분된 형태로 출력
        cout << count << " ";
    }

    cout << "\n";

    return 0;
}