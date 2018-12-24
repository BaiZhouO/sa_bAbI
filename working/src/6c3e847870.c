#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 60;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_7[57];                       // Tag.BODY
    entity_3 = 27;                           // Tag.BODY
    entity_9 = 17;                           // Tag.BODY
    char entity_0[58];                       // Tag.BODY
    entity_7[entity_5] = 'm';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_9 < entity_3){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'Q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER