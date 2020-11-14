//
//  _08_challange_enum.c
//  JasonFedin
//
//  Created by VictorKolis on 13/11/20.
//

#include <stdio.h>

int main(){
    
    /* Declare the values that that specific enum will accept */
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO = 39, EBAY, MICROSOFT};
    
    /* Declare variable types restricting them to the prior implementation */
    enum company company1, company2, company3;
    
    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;
    
    printf("The value of Xerox is, %d.\n", company1);
    printf("The value of Google is, %d.\n", company2);
    printf("The value of Ebay is, %d.\n\n", company3);

    return 0;
}
