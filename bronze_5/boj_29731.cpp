#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
// unordered_set은 C++ STL 컨테이너 중 하나로, 해시 기반의 집합(set)
// - 특징:
// 1.중복 허용 안함: 동일한 요소를 여러 번 저장할 수 없습니다.
// 2.빠른 검색: 요소의 존재 여부를 평균적으로 O(1) 시간 안에 확인할 수 있습니다.
// - find 함수
// unordered_set의 멤버 함수 중 find는 특정 값이 집합에 있는지 찾는 함수입니다.
// 시그니처: iterator find(const Key& key) const;
// - 반환값:
// - 요소가 집합에 있으면 해당 요소를 가리키는 반복자를 반환합니다.
// - 요소가 집합에 없으면 end() 반복자를 반환합니다.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<string> rick_astley_pledges = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"};

    int N;
    cin >> N;
    cin.ignore(); // 버퍼에 남은 줄바꿈 문자를 무시

    bool changed = false;

    /*
    rick_astley_pledges.find(pledge):
    pledge 문자열이 rick_astley_pledges 집합에 있는지 찾습니다.
    만약 문자열이 존재하면 해당 요소를 가리키는 반복자를 반환합니다.
    존재하지 않으면 rick_astley_pledges.end() 반복자를 반환합니다.
    */

    /*
    비교 연산:
    find의 반환값이 end()와 같다면:
    pledge 문자열은 rick_astley_pledges에 존재하지 않습니다.
    따라서 changed 변수를 true로 설정하여 "공약이 변경되었다"라는 상태를 나타냅니다.
    */
    for (int i = 0; i < N; ++i)
    {
        string pledge;
        getline(cin, pledge);
        if (rick_astley_pledges.find(pledge) == rick_astley_pledges.end())
        {
            changed = true;
        }
    }

    if (changed)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}