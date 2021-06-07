                                                                                                                           #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,A;
    for (i=1;i<=3;i++){
        for(j=1;j<=3-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            A=i+j;
            printf("%d",A);
        }

        for(j=1;j<i;j++){
            printf("%d",(A-j));
        }
    printf("\n");
    }

    return 0;
}
