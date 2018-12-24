#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_0[85];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = 42;                                       // Tag.BODY
    char entity_8[80];                                   // Tag.BODY
    entity_3 = 68;                                       // Tag.BODY
    entity_8[entity_2] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_7 = 72; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_7;                                // Tag.POINTER_DEC
    int entity_5;                                        // Tag.BODY
    char *entity_1 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[23];                                   // Tag.BODY
    entity_5 = 81;                                       // Tag.BODY
    entity_9[entity_5] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER