#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_1[47];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 30;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 31; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_2] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER