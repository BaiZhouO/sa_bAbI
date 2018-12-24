#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_5[78];                                   // Tag.BODY
    char entity_7[91];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8 = 47;                                       // Tag.BODY
    entity_5[entity_8] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;                                        // Tag.BODY
    entity_0 = 7;                                        // Tag.BODY
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 73;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 69; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'j';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER