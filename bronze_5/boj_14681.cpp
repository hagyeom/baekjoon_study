#include <iostream>
using namespace std;

int main(){
    // 1사분면:x좌표, y좌표 모두 양수
    // 2사분면:x좌표는 음수, y좌표는 양수
    // 3사분면:x좌표, y좌표 모두 음수
    // 4사분면:x좌표는 양수, y좌표는 음수
    int x,y;
    cin>>x>>y;
    if(x>=0&&y>=0){
        cout<<1;
    }else if(x<0&&y>=0){
        cout<<2;
    }else if(x<0&&y<0){
        cout<<3;
    }else if(x>=0&&y<0){
        cout<<4;
    }
    return 0;
}