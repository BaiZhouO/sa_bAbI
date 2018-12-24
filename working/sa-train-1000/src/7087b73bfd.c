#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_0 = 32;                           // Tag.BODY
    entity_9 = 48;                           // Tag.BODY
    char entity_4[86];                       // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'o';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER