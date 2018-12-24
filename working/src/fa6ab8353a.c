#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[28];                                   // Tag.BODY
    entity_6 = 91;                                       // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 93;                                       // Tag.BODY
    for(entity_1 = 87; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_1] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_1;                                // Tag.POINTER_DEC
    char entity_8[51];                                   // Tag.BODY
    entity_0[entity_2] = 'N';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_4 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                                        // Tag.BODY
    entity_5 = 15;                                       // Tag.BODY
    entity_8[entity_5] = 'z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER