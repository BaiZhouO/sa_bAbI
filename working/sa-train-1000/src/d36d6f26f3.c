#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_5[32];                                   // Tag.BODY
    entity_0 = 70;                                       // Tag.BODY
    for(entity_3 = 17; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                                        // Tag.BODY
    entity_7 = 45;                                       // Tag.BODY
    char entity_4[72];                                   // Tag.BODY
    entity_4[entity_7] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER