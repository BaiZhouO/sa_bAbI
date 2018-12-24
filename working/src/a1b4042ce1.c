#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[82];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 23;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 13; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_3;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    entity_7 = 96;                                       // Tag.BODY
    char *entity_8 = (char *)(entity_6 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[53];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_9[80];                                   // Tag.BODY
    entity_0 = 94;                                       // Tag.BODY
    entity_9[entity_0] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_7] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER