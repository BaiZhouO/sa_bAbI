#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[47];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 94;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 66;                           // Tag.BODY
    char entity_6[67];                       // Tag.BODY
    entity_4 = 27;                           // Tag.BODY
    while(entity_5 < entity_4){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_5] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_7[entity_2] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    char entity_9[65];                       // Tag.BODY
    entity_9[entity_0] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER