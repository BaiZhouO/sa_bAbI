#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_6 = 39;                                       // Tag.BODY
    char entity_2[57];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 33;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 21; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER