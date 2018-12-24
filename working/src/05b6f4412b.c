#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_0[91];                                   // Tag.BODY
    char entity_1[4];                                    // Tag.BODY
    entity_6 = 14;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[63];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 34;                                       // Tag.BODY
    entity_8 = 37;                                       // Tag.BODY
    entity_0[entity_8] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 60; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_3] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER