#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_7[5];                                    // Tag.BODY
    entity_5 = 9;                                        // Tag.BODY
    for(entity_3 = 42; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    entity_8 = 84;                                       // Tag.BODY
    char entity_1[92];                                   // Tag.BODY
    char *entity_6 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_8] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER