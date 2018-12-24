#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_9 = 25;                           // Tag.BODY
    entity_0 = 71;                           // Tag.BODY
    char entity_2[49];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_8[91];                       // Tag.BODY
    entity_5 = 80;                           // Tag.BODY
    while(entity_0 < entity_5){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    entity_8[entity_9] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER