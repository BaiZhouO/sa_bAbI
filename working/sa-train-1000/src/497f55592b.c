#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_4[84];                       // Tag.BODY
    entity_9 = 17;                           // Tag.BODY
    entity_6 = 54;                           // Tag.BODY
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = 's';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_6;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    entity_1 = 68;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 93;                           // Tag.BODY
    char entity_3[42];                       // Tag.BODY
    char entity_8[68];                       // Tag.BODY
    entity_3[entity_0] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_1] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER