#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[21];                                   // Tag.BODY
    char entity_1[65];                                   // Tag.BODY
    entity_7 = 16;                                       // Tag.BODY
    entity_8 = 43;                                       // Tag.BODY
    for(entity_4 = 50; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'f';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_6[entity_7] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER