#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_3[88];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_1[37];                       // Tag.BODY
    entity_7 = 43;                           // Tag.BODY
    entity_9 = 10;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 35;                           // Tag.BODY
    if(entity_0 < entity_7){                 // Tag.BODY
    entity_0 = 55;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 90;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_3[entity_9] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = &entity_0;                    // Tag.POINTER_DEC
    char entity_5[67];                       // Tag.BODY
    char *entity_8 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 28;                           // Tag.BODY
    entity_5[entity_2] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER