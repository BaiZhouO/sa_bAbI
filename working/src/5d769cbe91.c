#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 10;                                       // Tag.BODY
    char entity_0[23];                                   // Tag.BODY
    for(entity_1 = 44; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_1;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    char entity_5[17];                                   // Tag.BODY
    char entity_2[88];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 81;                                       // Tag.BODY
    entity_9 = 56;                                       // Tag.BODY
    entity_5[entity_9] = 'Z';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_4] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER