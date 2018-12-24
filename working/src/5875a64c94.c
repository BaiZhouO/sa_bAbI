#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_6[10];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    entity_0 = 87;                           // Tag.BODY
    while(entity_0 < entity_1){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_5 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[85];                       // Tag.BODY
    entity_3 = 43;                           // Tag.BODY
    entity_9[entity_3] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER