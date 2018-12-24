#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 79;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_7 = 85;                           // Tag.BODY
    entity_0 = 24;                           // Tag.BODY
    char entity_4[58];                       // Tag.BODY
    char entity_8[37];                       // Tag.BODY
    while(entity_5 < entity_0){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 92;                           // Tag.BODY
    entity_8[entity_7] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_1[37];                       // Tag.BODY
    entity_1[entity_6] = 't';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER