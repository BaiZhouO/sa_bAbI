#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_3[58];                       // Tag.BODY
    entity_9 = 15;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 62;                           // Tag.BODY
    entity_5 = 4;                            // Tag.BODY
    char entity_7[95];                       // Tag.BODY
    while(entity_5 < entity_9){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_4] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER