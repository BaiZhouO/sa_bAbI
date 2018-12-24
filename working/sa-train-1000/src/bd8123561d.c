#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[49];                                   // Tag.BODY
    entity_4 = 47;                                       // Tag.BODY
    entity_7 = 87;                                       // Tag.BODY
    char entity_9[58];                                   // Tag.BODY
    entity_9[entity_4] = '4';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 95;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 49; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_8;                                // Tag.POINTER_DEC
    char entity_1[18];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char *entity_6 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 60;                                       // Tag.BODY
    entity_1[entity_5] = '0';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER