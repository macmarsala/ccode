#include <stdio.h>

int main()
{
        int x;
        scanf("%d", &x);
        int max = x;
        while(x != 0)
        {
                if (x > max) max = x;
                scanf("%d", &x);
        }

        printf("maximum is %d.\n", max);
        return 0;
}
