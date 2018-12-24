#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[0];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0 = 37;                                       // Tag.BODY
    entity_7 = 28;                                       // Tag.BODY
    char entity_5[58];                                   // Tag.BODY
    entity_6[entity_0] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 39; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER