#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[44];                       // Tag.BODY
    char entity_1[39];                       // Tag.BODY
    char entity_4[15];                       // Tag.BODY
    entity_2 = 45;                           // Tag.BODY
    entity_8 = 55;                           // Tag.BODY
    entity_0 = 57;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 37;                           // Tag.BODY
    while(entity_0 < entity_8){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    entity_4[entity_2] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_6[entity_5] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_0] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER