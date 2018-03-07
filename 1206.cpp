#include <stdio.h>

int main()
{
    for(int tc=1; tc<=10; tc++) {
        int i, n, ans=0;
        int bd[1001];
        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", bd+i);

        for(i=2; i<n-2; i++) {
            if(bd[i] > bd[i-1] && bd[i] > bd[i-2]) {
                if(bd[i] > bd[i+1] && bd[i] > bd[i+2]) {
                    int left = bd[i-1]>bd[i-2] ? bd[i-1] : bd[i-2];
                    int right = bd[i+1]>bd[i+2] ? bd[i+1] : bd[i+2];
                    ans += (bd[i] - (left > right ? left : right));
                }
            }
        }
        printf("#%d %d\n", tc, ans);
    }

    return 0;
}
