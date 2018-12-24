#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[97];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 53;                           // Tag.BODY
    entity_0 = 32;                           // Tag.BODY
    while(entity_0 < entity_5){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'x';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER