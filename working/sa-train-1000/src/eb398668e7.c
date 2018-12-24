#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[34];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 11;                           // Tag.BODY
    entity_3 = 46;                           // Tag.BODY
    while(entity_0 < entity_3){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER