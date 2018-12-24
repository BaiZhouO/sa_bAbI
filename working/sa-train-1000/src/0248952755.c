#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[84];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 16;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 68;                           // Tag.BODY
    while(entity_0 < entity_7){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char entity_9[13];                       // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    entity_8 = 5;                            // Tag.BODY
    entity_9[entity_8] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER