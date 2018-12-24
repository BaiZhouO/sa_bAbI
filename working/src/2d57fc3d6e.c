#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_1[82];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_3 = 50;                                       // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 16; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'U';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER