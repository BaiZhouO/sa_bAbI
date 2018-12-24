#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[67];                                   // Tag.BODY
    entity_2 = 11;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 28; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER