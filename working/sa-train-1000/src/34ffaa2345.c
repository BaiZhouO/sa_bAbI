#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_3[68];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = 69;                                       // Tag.BODY
    for(entity_8 = 24; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_8;                                // Tag.POINTER_DEC
    char entity_2[67];                                   // Tag.BODY
    char entity_1[23];                                   // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                                        // Tag.BODY
    entity_4 = 85;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2[entity_4] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 32;                                       // Tag.BODY
    entity_1[entity_5] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER