#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 11;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 69;                           // Tag.BODY
    char entity_9[12];                       // Tag.BODY
    char entity_1[0];                        // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 6;                            // Tag.BODY
    while(entity_8 < entity_3){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_8] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    char entity_0[43];                       // Tag.BODY
    char *entity_5 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                            // Tag.BODY
    entity_7 = 4;                            // Tag.BODY
    entity_0[entity_7] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_6] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER