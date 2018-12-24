#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 94;                                       // Tag.BODY
    char entity_1[10];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 68; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_3;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[14];                                   // Tag.BODY
    entity_2 = 13;                                       // Tag.BODY
    entity_0[entity_2] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER