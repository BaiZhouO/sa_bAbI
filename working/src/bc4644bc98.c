#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_9[37];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 19;                           // Tag.BODY
    entity_8 = 87;                           // Tag.BODY
    while(entity_1 < entity_8){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER