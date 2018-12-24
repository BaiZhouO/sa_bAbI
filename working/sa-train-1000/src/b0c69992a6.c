#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_5 = 56;                           // Tag.BODY
    char entity_3[23];                       // Tag.BODY
    entity_2 = 48;                           // Tag.BODY
    entity_7 = 12;                           // Tag.BODY
    char entity_0[94];                       // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    entity_5 = 92;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 82;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_1 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 41;                           // Tag.BODY
    char entity_6[53];                       // Tag.BODY
    entity_3[entity_7] = '9';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_8] = 'y';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER