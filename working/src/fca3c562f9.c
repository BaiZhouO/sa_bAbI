#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_3 = 63;                                       // Tag.BODY
    for(entity_1 = 55; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_1;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    char entity_7[87];                                   // Tag.BODY
    char *entity_6 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 55;                                       // Tag.BODY
    entity_7[entity_8] = '2';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER