#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[2];                        // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 65;                           // Tag.BODY
    char entity_8[65];                       // Tag.BODY
    entity_9 = 3;                            // Tag.BODY
    entity_4 = 9;                            // Tag.BODY
    while(entity_9 < entity_6){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_9] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[57];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    entity_1[entity_2] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER