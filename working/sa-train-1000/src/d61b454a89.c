#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[63];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_8[84];                       // Tag.BODY
    entity_6 = 97;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_0 = 72;                           // Tag.BODY
    entity_1 = 50;                           // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'e';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9[entity_0] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER