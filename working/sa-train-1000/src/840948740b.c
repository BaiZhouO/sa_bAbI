#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_3[88];                                   // Tag.BODY
    entity_7 = 1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 40; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'e';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_5;                                // Tag.POINTER_DEC
    char entity_0[40];                                   // Tag.BODY
    char *entity_6 = (char *)(entity_2 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[71];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8 = 27;                                       // Tag.BODY
    entity_4 = 81;                                       // Tag.BODY
    entity_0[entity_4] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_8] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER