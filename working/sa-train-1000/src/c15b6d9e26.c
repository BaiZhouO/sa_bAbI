#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_2[52];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8 = 72;                                       // Tag.BODY
    entity_6 = 54;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_5[37];                                   // Tag.BODY
    if (entity_3 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 53; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_4] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_4;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_1[90];                                   // Tag.BODY
    entity_7 = 78;                                       // Tag.BODY
    char *entity_0 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_7] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER