#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_2[27];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 79;                                       // Tag.BODY
    if (entity_9 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 56; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_1] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER