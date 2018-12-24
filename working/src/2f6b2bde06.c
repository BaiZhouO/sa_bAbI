#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_7[74];                                   // Tag.BODY
    entity_5 = 90;                                       // Tag.BODY
    char entity_6[26];                                   // Tag.BODY
    entity_3 = 49;                                       // Tag.BODY
    for(entity_1 = 65; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_1;                                // Tag.POINTER_DEC
    entity_6[entity_5] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_0 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER