#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_0[93];                       // Tag.BODY
    char entity_3[4];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 95;                           // Tag.BODY
    entity_5 = 11;                           // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    if(entity_6 < entity_4){                 // Tag.BODY
    entity_6 = 94;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 63;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_6] = 'K';                // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_5] = 'Y';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char entity_1[64];                       // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                            // Tag.BODY
    entity_9 = 25;                           // Tag.BODY
    entity_1[entity_9] = '1';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER