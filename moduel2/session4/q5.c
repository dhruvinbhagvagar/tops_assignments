#include <stdio.h>
main()
{
    int followerCount = 100;

    printf("Initial follower count = %d", followerCount);

    printf("\nUsing Pre-increment (++followerCount)\n");
    printf("Value = %d\n", ++followerCount);
    printf("After Pre-increment = %d\n", followerCount);

    followerCount = 100;

    printf("\nUsing Post-increment (followerCount++)\n");
    printf("Value = %d\n", followerCount++);
    printf("After Post-increment = %d\n", followerCount);
}
