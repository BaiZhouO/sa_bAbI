#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_1[94];                                   // Tag.BODY
    entity_8 = 5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 26; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_4[99];                                   // Tag.BODY
    entity_7 = 38;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[46];                                   // Tag.BODY
    entity_6 = 97;                                       // Tag.BODY
    entity_4[entity_6] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_7] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER