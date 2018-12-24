#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_9[89];                                   // Tag.BODY
    entity_5 = 98;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_4[41];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_8 = 49;                                       // Tag.BODY
    for(entity_2 = 14; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = '9';                            // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_5] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_2;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 2;                                        // Tag.BODY
    char entity_7[13];                                   // Tag.BODY
    entity_7[entity_0] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER