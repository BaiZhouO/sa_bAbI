#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_1[98];                       // Tag.BODY
    entity_3 = 19;                           // Tag.BODY
    entity_0 = 82;                           // Tag.BODY
    while(entity_3 < entity_0){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'v';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER