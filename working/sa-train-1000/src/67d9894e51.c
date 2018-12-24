#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_3[13];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 14;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 93;                                       // Tag.BODY
    entity_3[entity_8] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[95];                                   // Tag.BODY
    for(entity_6 = 17; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = '5';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER