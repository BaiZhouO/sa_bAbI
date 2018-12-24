#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_7[53];                                   // Tag.BODY
    entity_0 = 59;                                       // Tag.BODY
    for(entity_6 = 60; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER