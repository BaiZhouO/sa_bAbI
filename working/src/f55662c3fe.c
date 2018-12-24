#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_0[70];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_4[55];                       // Tag.BODY
    entity_1 = 74;                           // Tag.BODY
    entity_6 = 50;                           // Tag.BODY
    entity_9 = 25;                           // Tag.BODY
    while(entity_6 < entity_1){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_6] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER