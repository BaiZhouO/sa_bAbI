#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_1[18];                                   // Tag.BODY
    entity_8 = 6;                                        // Tag.BODY
    for(entity_6 = 45; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_6;                                // Tag.POINTER_DEC
    char entity_5[2];                                    // Tag.BODY
    char *entity_0 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                                        // Tag.BODY
    entity_2 = 44;                                       // Tag.BODY
    entity_5[entity_2] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER