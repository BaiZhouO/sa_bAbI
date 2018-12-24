#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_9 = 82;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    char entity_5[48];                       // Tag.BODY
    entity_2 = 4;                            // Tag.BODY
    entity_3 = 29;                           // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = 'r';                // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_9] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_2;                    // Tag.POINTER_DEC
    char entity_4[98];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_6 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 96;                           // Tag.BODY
    entity_4[entity_8] = 'g';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER