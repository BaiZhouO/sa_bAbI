#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 74;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 93;                           // Tag.BODY
    char entity_0[53];                       // Tag.BODY
    while(entity_6 < entity_2){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_6] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_6;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char entity_7[90];                       // Tag.BODY
    entity_4 = 38;                           // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_4] = 'w';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER