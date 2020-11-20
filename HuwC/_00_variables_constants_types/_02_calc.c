//
//  _02_calc.c
//  Instructor : HuwC
//
//  Created by VictorKolis on 16/11/20.
//

#include <stdio.h>

int main(){
    
    int subtotal1, tax1, grandtotal1;
    double subtotal2, tax2, grandtotal2;
    double taxRate;
    
    taxRate = 0.175;
    
    /* First case using integers */
    subtotal1 = 200;
    tax1 = subtotal1 * taxRate;
    grandtotal1 = subtotal1 + tax1;
    printf("The tax on %d is %d, so the grand total is %d.\n", subtotal1, tax1, grandtotal1);
    
    /* Second case using doubles */
    subtotal2 = 200;
    tax2 = subtotal2 * taxRate;
    grandtotal2 = subtotal2 + tax2;
    printf("The tax on %.2f is %.2f, so the grand total is %.2f.\n", subtotal2, tax2, grandtotal2);

    /* Depending on the compiler/coputer using integer will truncate the values of a floating point number which did not happen in here */

    return 0;
}
