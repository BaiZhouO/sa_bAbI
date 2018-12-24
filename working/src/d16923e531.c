#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_9[34];                       // Tag.BODY
    char entity_0[82];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 59;                           // Tag.BODY
    entity_6 = 29;                           // Tag.BODY
    entity_5 = 99;                           // Tag.BODY
    entity_9[entity_5] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_8 < entity_6){                 // Tag.BODY
    entity_8 = 76;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_8] = 'R';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                            // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    char entity_1[29];                       // Tag.BODY
    entity_1[entity_4] = 'm';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER