#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_2[51];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 50;                                       // Tag.BODY
    for(entity_7 = 81; entity_7 < entity_5; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_7] = '4';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_7;                                // Tag.POINTER_DEC
    char entity_9[51];                                   // Tag.BODY
    char *entity_1 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                        // Tag.BODY
    entity_3 = 65;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_6[32];                                   // Tag.BODY
    entity_8 = 47;                                       // Tag.BODY
    entity_9[entity_8] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_3] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER