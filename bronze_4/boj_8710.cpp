#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    // k:코직의 키, w:코치가 요구한 키, m: 한 번 때릴 때마다 늘어나는 혹의 길이
    int k, w, m;
    scanf("%d %d %d", &k, &w, &m);
    int result = ceil((double)(w - k) / m);
    printf("%d\n", result);
    return 0;
}