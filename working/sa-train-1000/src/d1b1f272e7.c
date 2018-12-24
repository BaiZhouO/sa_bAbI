#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 14;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_5[90];                                   // Tag.BODY
    for(entity_0 = 64; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'G';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    char entity_4[89];                                   // Tag.BODY
    char *entity_1 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                                        // Tag.BODY
    entity_6 = 19;                                       // Tag.BODY
    entity_4[entity_6] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER