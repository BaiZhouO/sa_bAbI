#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[27];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = 21;                                       // Tag.BODY
    for(entity_0 = 82; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER