#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int tc=1; tc<=T; tc++) {
        int p, q, r, s, w;
        scanf("%d%d%d%d%d", &p, &q, &r, &s, &w);

        int ans=q;
        if(w > r) {
            ans += s*(w-r);
        }
        if(ans > p*w)
            ans = p*w;

        printf("#%d %d\n", tc, ans);
    }
}
