#include <stdio.h>

/*print Fahrenheight-Celsius table
    for fahr = 0, 20, ..., 300*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheight-Celsius table\n");
    while (fahr <= upper)
    {

        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // Each % in the first argument is paired with the corresponding second argument, third argument, etc
        // must match up properly by number and type
        // print first number of each line in a field three digits wide
        // print the second number in a field six digits wide
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}