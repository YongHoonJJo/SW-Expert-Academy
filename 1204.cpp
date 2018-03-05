#include <stdio.h>

int main()
{
    int T=10;
    while(T--) {
        int tc, ans=0, max=0;
        int score[101]={0};

        scanf("%d", &tc);
    
        for(int i=0; i<1000; i++) {
            int k;
            scanf("%d", &k);
            score[k]++;
        }

        for(int i=0; i<=100; i++) {
            if(max <= score[i]) {
                max = score[i];
                ans = i;
            }
        }

        printf("#%d %d\n", tc, ans);
    }
}
