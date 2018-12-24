#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_9[46];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = 82;                           // Tag.BODY
    entity_1 = 80;                           // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'V';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char entity_7[83];                       // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                            // Tag.BODY
    entity_0 = 82;                           // Tag.BODY
    entity_7[entity_0] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER