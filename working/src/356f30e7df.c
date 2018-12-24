#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 46;                           // Tag.BODY
    entity_0 = 24;                           // Tag.BODY
    char entity_3[73];                       // Tag.BODY
    if(entity_7 < entity_0){                 // Tag.BODY
    entity_7 = 32;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'R';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char entity_1[46];                       // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                            // Tag.BODY
    char entity_5[21];                       // Tag.BODY
    entity_4 = 12;                           // Tag.BODY
    entity_1[entity_4] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 45;                           // Tag.BODY
    entity_5[entity_9] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER