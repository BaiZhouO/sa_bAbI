#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_4[68];                       // Tag.BODY
    entity_9 = 90;                           // Tag.BODY
    entity_0 = 90;                           // Tag.BODY
    while(entity_0 < entity_9){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_0;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_2[65];                       // Tag.BODY
    char entity_3[31];                       // Tag.BODY
    char *entity_8 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    entity_5 = 90;                           // Tag.BODY
    entity_3[entity_5] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 25;                           // Tag.BODY
    entity_2[entity_7] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER