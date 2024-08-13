#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>




int main(int argc, char const *argv[])
{
    struct timeval t1, t2, t3, t4;
    gettimeofday(&t1, NULL);
    printf("something.\n");
    gettimeofday(&t2, NULL);
    long tt1 = t1.tv_sec * 1000000 + t1.tv_usec;
    long tt2 = t1.tv_sec * 1000000 + t2.tv_usec;
    printf("The time cost of printf(\"something.\\n\") is %ld us.\n", tt2-tt1);

    gettimeofday(&t3, NULL);
    printf("something really long -------------------------------\
    ------------------------------------------------------------\
    ----------------------------------------------------------\
    ----------------------------------------------------------\
    ------------------------------------------------------------\
    ----------------------------------------------------------\
    ----------------------------------------------------------\
    --------------------------------------------------------\
    ------------------------------------------------------\n");
    gettimeofday(&t4, NULL);
    long tt3 = t3.tv_sec * 1000000 + t3.tv_usec;
    long tt4 = t4.tv_sec * 1000000 + t4.tv_usec;
    printf("The time cost of printf(\"something long.\\n\") is %ld us.\n", tt2-tt1);

    return 0;
}
