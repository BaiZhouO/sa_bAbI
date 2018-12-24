#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 24;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 46;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_3[1];                        // Tag.BODY
    entity_0 = 93;                           // Tag.BODY
    char entity_8[99];                       // Tag.BODY
    if(entity_0 < entity_6){                 // Tag.BODY
    entity_0 = 15;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_0] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    char entity_2[2];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 66;                           // Tag.BODY
    entity_2[entity_4] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER