/*
 *  _03_constants.c
 * Instructor : HuwC
 *
 * Created by VictorKolis on 19/11/20.
 *
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){

    /* Classical way of declaring a constant */
    /* Likely and allowabily possible to be redefined, warnings would be generated */
    #define PI 3.141593
    
    /* More modern way of declaring a constant */
    /* Not able to be redefine, compilation errors would be generated */
    const double PI_2 = 3.141593;
    
    printf("%f\n", PI);
    printf("%f\n", M_PI);
    printf("%f\n", PI_2);
    
    return 0;
}
