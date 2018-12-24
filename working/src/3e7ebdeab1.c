#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[56];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_9[83];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_7 = 99;                                       // Tag.BODY
    entity_0 = 70;                                       // Tag.BODY
    char entity_2[32];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4 = 78;                                       // Tag.BODY
    entity_9[entity_4] = 'l';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 32; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_1;                                // Tag.POINTER_DEC
    entity_2[entity_0] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER