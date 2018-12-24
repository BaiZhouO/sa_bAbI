#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = 1;                                        // Tag.BODY
    char entity_2[58];                                   // Tag.BODY
    for(entity_6 = 47; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'Q';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_6;                                // Tag.POINTER_DEC
    int entity_3;                                        // Tag.BODY
    char entity_9[27];                                   // Tag.BODY
    entity_3 = 81;                                       // Tag.BODY
    char *entity_4 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                                        // Tag.BODY
    entity_9[entity_3] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 37;                                       // Tag.BODY
    char entity_5[77];                                   // Tag.BODY
    entity_5[entity_7] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER