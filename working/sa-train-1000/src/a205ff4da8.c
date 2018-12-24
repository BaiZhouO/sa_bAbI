#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 57;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 64;                           // Tag.BODY
    char entity_2[88];                       // Tag.BODY
    while(entity_9 < entity_1){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_9] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER