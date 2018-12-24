#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8 = 37;                                       // Tag.BODY
    char entity_7[45];                                   // Tag.BODY
    for(entity_4 = 78; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER