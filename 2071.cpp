#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    for(int tc=1; tc<=T; tc++) {
        int sum=0;
        for(int i=0; i<10; i++) {
            int k;
            scanf("%d", &k);
            sum += k;
        }
        printf("#%d %d\n", tc, (int)((sum/10.0)+0.5));
    }

    return 0;
}
