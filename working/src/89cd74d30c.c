#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[57];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 21;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 30;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 60; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = '6';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER