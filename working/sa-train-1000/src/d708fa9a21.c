#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_7[67];                       // Tag.BODY
    entity_0 = 54;                           // Tag.BODY
    entity_9 = 72;                           // Tag.BODY
    char entity_3[5];                        // Tag.BODY
    entity_2 = 99;                           // Tag.BODY
    while(entity_9 < entity_2){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_9] = 'h';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char entity_4[45];                       // Tag.BODY
    char *entity_6 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 79;                           // Tag.BODY
    entity_4[entity_1] = 'Q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER