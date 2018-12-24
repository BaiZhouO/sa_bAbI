#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_3[87];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_2 = 61;                                       // Tag.BODY
    entity_8 = 28;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_4[88];                                   // Tag.BODY
    for(entity_0 = 82; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'u';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_0] = 'o';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER