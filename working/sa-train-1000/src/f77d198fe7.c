#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_8[42];                                   // Tag.BODY
    entity_5 = 22;                                       // Tag.BODY
    for(entity_3 = 74; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_3;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_6 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[30];                                   // Tag.BODY
    entity_0 = 13;                                       // Tag.BODY
    entity_9 = 95;                                       // Tag.BODY
    entity_1[entity_0] = 'x';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[88];                                   // Tag.BODY
    entity_4[entity_9] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER