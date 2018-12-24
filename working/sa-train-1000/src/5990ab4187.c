#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 61;                           // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    char entity_4[93];                       // Tag.BODY
    while(entity_0 < entity_9){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER