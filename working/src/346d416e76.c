#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[79];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_2[13];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_7 = 25;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 87;                           // Tag.BODY
    entity_9 = 13;                           // Tag.BODY
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_6] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    entity_1[entity_7] = 'N';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER