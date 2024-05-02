#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k; /* n:출발역과 종착역을 제외한 정거장의 수
    k:출발역에서 탑승하는 사람의 수 */
    int a,b; /* a:정거장에서 탑승하는 인원
    b:하차하는 인원 */
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a>>b;
    }

    cout<<"비와이"; 

    return 0;
}