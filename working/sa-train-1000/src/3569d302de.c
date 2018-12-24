#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[34];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_3 = 53;                           // Tag.BODY
    entity_6 = 87;                           // Tag.BODY
    while(entity_6 < entity_3){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER