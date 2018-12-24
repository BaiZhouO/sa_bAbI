#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 74;                           // Tag.BODY
    char entity_4[96];                       // Tag.BODY
    entity_6 = 56;                           // Tag.BODY
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = '3';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER