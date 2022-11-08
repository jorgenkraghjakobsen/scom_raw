#include <stdio.h>
#include <stdlib.h>
#include <windows.h>                // for Windows APIs

int main(int argc, char **argv)
{
    int i,n = atoi(argv[1]);
	LARGE_INTEGER frequency;        // ticks per second
    LARGE_INTEGER t1, t2;           // ticks
    double elapsedTime;

    // get ticks per second
    QueryPerformanceFrequency(&frequency);

    // start timer
    QueryPerformanceCounter(&t1);

    for (i=0;i<n;i++)
    { system("scom r 0 8");
    }

    // stop timer
    QueryPerformanceCounter(&t2);

    // compute and print the elapsed time in millisec
    elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
    printf("Time %f ms \n", elapsedTime);

    return 0;
}
