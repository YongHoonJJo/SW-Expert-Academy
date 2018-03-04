#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i=1; i<=tc; i++) {
        int k, ans=0;
        for(int j=0; j<10; j++) {
            scanf("%d", &k);
            if(k&1) ans += k;
        }
        printf("#%d %d\n", i, ans);
    }

    return 0;
}
