#include <stdio.h>

int main()
{
    int T;
    setbuf(stdout, NULL);
    scanf("%d", &T);

    for(int tc=1; tc<=T; tc++) {
        int n, ans=0;
        int room[201]={0};
        scanf("%d", &n);

        while(n--) {
            int a, b;
            scanf("%d%d", &a, &b);
            if(a > b) { int t=a; a=b; b=t; }
            
            if(a&1) { a++; a/=2; }
            else { a/=2; }

            if(b&1) { b++; b/=2; }
            else { b/=2; }

            for(int i=a; i<=b; i++)
                room[i]++;
        }
        
        for(int i=1; i<=200; i++)
            if(ans < room[i])
                ans = room[i];
        printf("#%d %d\n", tc, ans);
    }
     
    return 0;
}
