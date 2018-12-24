#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_4 = 91;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    char entity_2[16];                       // Tag.BODY
    entity_9 = 74;                           // Tag.BODY
    char entity_1[83];                       // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'M';                // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_4] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER