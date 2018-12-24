#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    entity_0 = 87;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 94;                           // Tag.BODY
    char entity_2[68];                       // Tag.BODY
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER