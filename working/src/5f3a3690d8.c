#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_7[82];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[74];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_8[16];                                   // Tag.BODY
    entity_4 = 60;                                       // Tag.BODY
    entity_5 = 75;                                       // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    for(entity_0 = 37; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = '1';                            // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_4] = 'N';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_0;                                // Tag.POINTER_DEC
    entity_8[entity_5] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_2 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER