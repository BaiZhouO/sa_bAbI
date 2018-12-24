#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_8[32];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = 72;                                       // Tag.BODY
    for(entity_0 = 82; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_0] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_5 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER