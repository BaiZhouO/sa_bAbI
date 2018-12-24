#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_0[98];                       // Tag.BODY
    char entity_4[4];                        // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_7 = 70;                           // Tag.BODY
    char entity_5[12];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 48;                           // Tag.BODY
    entity_3 = 9;                            // Tag.BODY
    entity_4[entity_3] = 'o';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 79;                           // Tag.BODY
    if(entity_2 < entity_7){                 // Tag.BODY
    entity_2 = 14;                           // Tag.BODY
    entity_0[entity_9] = 'h';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_2 = 54;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER