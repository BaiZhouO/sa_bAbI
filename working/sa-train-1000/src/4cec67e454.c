#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 92;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_8[98];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 71;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 70; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'V';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER