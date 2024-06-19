// 백준 11257번: IT Passport Examination
#include <iostream>

using namespace std;

int main()
{
    // N 응시자의 수
    // candidate_number 응시자 번호
    // strategic_score 전략 분야 점수
    // management_score 경영 분야 점수
    // technology_score 기술 분야 점수
    // total_score 총점
    int N;
    cin >> N;

    int candidate_number, strategic_score, management_score, technology_score;
    for (int i = 0; i < N; i++)
    {
        cin >> candidate_number >> strategic_score >> management_score >> technology_score;

        int total_score = strategic_score + management_score + technology_score;

        if (total_score >= 55 && strategic_score >= 35 * 0.3 && management_score >= 25 * 0.3 && technology_score >= 40 * 0.3)
        {
            cout << candidate_number << " " << total_score << " " << "PASS\n";
        }
        else
        {
            cout << candidate_number << " " << total_score << " " << "FAIL\n";
        }
    }
    return 0;
}