#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[43];                                   // Tag.BODY
    entity_0 = 19;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_6[41];                                   // Tag.BODY
    entity_1 = 20;                                       // Tag.BODY
    for(entity_9 = 86; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    int entity_5;                                        // Tag.BODY
    entity_6[entity_0] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 25;                                       // Tag.BODY
    char *entity_7 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[81];                                   // Tag.BODY
    entity_4[entity_5] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER