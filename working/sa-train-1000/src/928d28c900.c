#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[56];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0 = 23;                                       // Tag.BODY
    entity_1 = 32;                                       // Tag.BODY
    char entity_9[53];                                   // Tag.BODY
    for(entity_5 = 41; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'Z';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_7[entity_0] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = &entity_5;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 1;                                        // Tag.BODY
    char entity_8[89];                                   // Tag.BODY
    entity_8[entity_4] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER