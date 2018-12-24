#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[74];                                   // Tag.BODY
    entity_9 = 27;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 61; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = 'Q';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER