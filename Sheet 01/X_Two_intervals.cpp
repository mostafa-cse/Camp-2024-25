#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1, r1, l2, r2;
    scanf("%d%d%d%d", &l1, &r1, &l2, &r2);

    int mxL_1_2 = (l1 > l2) ? l1 : l2;
    int mnR_1_2 = (r1 < r2) ? r1 : r2;
    if (mxL_1_2 <= r1 && mnR_1_2 <= r2)
    {
        if (mxL_1_2 <= mnR_1_2)
        {
            printf("%d %d", mxL_1_2, mnR_1_2);
        }
        else
        {
            puts("-1");
        }
    }
    else
    {
        puts("-1");
    }

    return 0;
}
