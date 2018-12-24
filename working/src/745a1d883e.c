#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[97];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[54];                                   // Tag.BODY
    entity_1 = 73;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 28;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 21; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_9] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_5 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER