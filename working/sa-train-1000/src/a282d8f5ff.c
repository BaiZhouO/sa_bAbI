#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[53];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[90];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_3 = 51;                           // Tag.BODY
    entity_4 = 37;                           // Tag.BODY
    if(entity_8 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_8] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    char entity_1[26];                       // Tag.BODY
    char *entity_9 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 53;                           // Tag.BODY
    entity_1[entity_2] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER