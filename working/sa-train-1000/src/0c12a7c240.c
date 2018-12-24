#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_5 = 39;                           // Tag.BODY
    char entity_8[53];                       // Tag.BODY
    entity_6 = 59;                           // Tag.BODY
    if(entity_5 < entity_6){                 // Tag.BODY
    entity_5 = 95;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 46;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 69;                           // Tag.BODY
    char entity_2[10];                       // Tag.BODY
    entity_2[entity_7] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER