#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[38];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[63];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5 = 0;                                        // Tag.BODY
    entity_3 = 45;                                       // Tag.BODY
    if (entity_9 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 29; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_8;                                // Tag.POINTER_DEC
    entity_0[entity_3] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                                        // Tag.BODY
    entity_6 = 63;                                       // Tag.BODY
    char entity_2[55];                                   // Tag.BODY
    entity_2[entity_6] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER