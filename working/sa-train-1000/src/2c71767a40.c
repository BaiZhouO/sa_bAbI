#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[83];                                   // Tag.BODY
    entity_7 = 39;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_3[78];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_8[91];                                   // Tag.BODY
    entity_5 = 33;                                       // Tag.BODY
    entity_9 = 54;                                       // Tag.BODY
    entity_3[entity_5] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_6 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 16; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_9] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_4] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER