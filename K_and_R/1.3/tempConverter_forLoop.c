#include <stdio.h>


#define LOWER 0
#define UPPER 300
#define STEP 20

/*print Fahrenheight-Celsius table
    for fahr = 0, 20, ..., 300*/
main()
{

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}