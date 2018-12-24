#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_1[24];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 22;                           // Tag.BODY
    entity_9 = 61;                           // Tag.BODY
    char entity_7[88];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 45;                           // Tag.BODY
    entity_1[entity_8] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_6] = 'i';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                            // Tag.BODY
    entity_3 = 82;                           // Tag.BODY
    char entity_5[48];                       // Tag.BODY
    entity_5[entity_3] = 'V';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER