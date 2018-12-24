#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[21];                                   // Tag.BODY
    entity_4 = 69;                                       // Tag.BODY
    for(entity_0 = 62; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_0] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_0;                                // Tag.POINTER_DEC
    char entity_3[68];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[37];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = 91;                                       // Tag.BODY
    entity_1[entity_6] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 66;                                       // Tag.BODY
    entity_3[entity_9] = 'T';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER