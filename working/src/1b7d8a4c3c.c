#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_3[51];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 50;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[55];                                   // Tag.BODY
    entity_4[entity_7] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 73;                                       // Tag.BODY
    for(entity_5 = 45; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_5;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    entity_8 = 37;                                       // Tag.BODY
    char entity_1[33];                                   // Tag.BODY
    entity_1[entity_8] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_9 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER