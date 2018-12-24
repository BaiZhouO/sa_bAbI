#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_4[6];                        // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    entity_2 = 87;                           // Tag.BODY
    entity_6 = 6;                            // Tag.BODY
    char entity_0[21];                       // Tag.BODY
    if(entity_2 < entity_6){                 // Tag.BODY
    entity_2 = 93;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 80;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'B';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char entity_3[79];                       // Tag.BODY
    char *entity_5 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 74;                           // Tag.BODY
    entity_3[entity_8] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_1] = 'U';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER