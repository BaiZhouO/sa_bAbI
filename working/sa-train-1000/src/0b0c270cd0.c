#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_4[53];                                   // Tag.BODY
    entity_0 = 87;                                       // Tag.BODY
    for(entity_8 = 82; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER