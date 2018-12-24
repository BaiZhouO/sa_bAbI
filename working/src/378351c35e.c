#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 29;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[43];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 93;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 15; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = 'j';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER