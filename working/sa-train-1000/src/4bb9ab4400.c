#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_6[16];                                   // Tag.BODY
    entity_5 = 70;                                       // Tag.BODY
    for(entity_4 = 19; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_4;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[76];                                   // Tag.BODY
    entity_8 = 42;                                       // Tag.BODY
    entity_1[entity_8] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER