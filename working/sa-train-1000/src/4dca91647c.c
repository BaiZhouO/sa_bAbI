#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 39;                                       // Tag.BODY
    char entity_6[53];                                   // Tag.BODY
    for(entity_0 = 71; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER