#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[35];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[15];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 79;                           // Tag.BODY
    entity_6 = 14;                           // Tag.BODY
    entity_0 = 67;                           // Tag.BODY
    if(entity_5 < entity_6){                 // Tag.BODY
    entity_7[entity_0] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 93;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'x';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_1 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 48;                           // Tag.BODY
    char entity_8[28];                       // Tag.BODY
    entity_8[entity_4] = 'D';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER