#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_2[24];                       // Tag.BODY
    entity_7 = 31;                           // Tag.BODY
    entity_1 = 25;                           // Tag.BODY
    char entity_5[33];                       // Tag.BODY
    entity_6 = 16;                           // Tag.BODY
    if(entity_7 < entity_1){                 // Tag.BODY
    entity_7 = 10;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 82;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char entity_0[34];                       // Tag.BODY
    entity_2[entity_6] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 92;                           // Tag.BODY
    entity_0[entity_4] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER