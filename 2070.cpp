#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int tc=1; tc<=T; tc++) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("#%d ", tc);
        if(a > b) puts(">");
        else if(a < b) puts("<");
        else puts("=");
    }

    return 0;
}
