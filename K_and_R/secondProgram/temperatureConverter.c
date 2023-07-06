#include <stdio.h>

/*print Fahrenheight-Celsius table
    for fahr = 0, 20, ..., 300*/
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        // Each % in the first argument is paired with the corresponding second argument, third argument, etc
        // must match up properly by number and type
        // print first number of each line in a field three digits wide
        // print the second number in a field six digits wide
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}