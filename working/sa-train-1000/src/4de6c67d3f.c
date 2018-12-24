#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 61;                                       // Tag.BODY
    char entity_4[61];                                   // Tag.BODY
    for(entity_6 = 88; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_6] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_6;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 92;                                       // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 22;                                       // Tag.BODY
    char entity_0[6];                                    // Tag.BODY
    entity_0[entity_1] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[36];                                   // Tag.BODY
    entity_7[entity_8] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER