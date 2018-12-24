#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[63];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 89;                                       // Tag.BODY
    char entity_4[79];                                   // Tag.BODY
    entity_2 = 64;                                       // Tag.BODY
    for(entity_8 = 53; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_2] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_8;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    entity_7 = 40;                                       // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[74];                                   // Tag.BODY
    entity_5[entity_7] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER