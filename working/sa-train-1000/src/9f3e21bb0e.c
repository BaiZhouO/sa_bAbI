#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[13];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = 52;                           // Tag.BODY
    entity_6 = 48;                           // Tag.BODY
    while(entity_0 < entity_6){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    entity_4 = 52;                           // Tag.BODY
    char *entity_5 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[57];                       // Tag.BODY
    entity_9[entity_4] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER