#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[80];                                   // Tag.BODY
    entity_3 = 18;                                       // Tag.BODY
    entity_6 = 32;                                       // Tag.BODY
    char entity_5[80];                                   // Tag.BODY
    for(entity_7 = 45; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'w';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    entity_5[entity_3] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_9;                                        // Tag.BODY
    entity_9 = 73;                                       // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[14];                                   // Tag.BODY
    entity_2[entity_9] = 'Q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER