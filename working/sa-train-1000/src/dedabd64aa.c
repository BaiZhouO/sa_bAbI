#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[45];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_5 = 13;                                       // Tag.BODY
    char entity_0[48];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 45;                                       // Tag.BODY
    for(entity_2 = 74; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_9] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER