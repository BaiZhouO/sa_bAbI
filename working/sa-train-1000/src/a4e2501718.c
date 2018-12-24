#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_3[90];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 4;                            // Tag.BODY
    entity_7 = 82;                           // Tag.BODY
    entity_8 = 49;                           // Tag.BODY
    entity_3[entity_5] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_1[40];                       // Tag.BODY
    while(entity_7 < entity_8){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER