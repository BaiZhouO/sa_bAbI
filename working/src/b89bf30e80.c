#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    entity_8 = 61;                                       // Tag.BODY
    char entity_3[62];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 94; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_6] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER