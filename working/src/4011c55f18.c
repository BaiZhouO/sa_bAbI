#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[67];                                   // Tag.BODY
    entity_1 = 68;                                       // Tag.BODY
    for(entity_3 = 46; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_3;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    entity_2 = 29;                                       // Tag.BODY
    char *entity_6 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[80];                                   // Tag.BODY
    entity_7[entity_2] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER