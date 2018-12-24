#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 76;                                       // Tag.BODY
    entity_2 = 69;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_5[56];                                   // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 43; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_8;                                // Tag.POINTER_DEC
    char entity_0[41];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5[entity_2] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 61;                                       // Tag.BODY
    entity_0[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER