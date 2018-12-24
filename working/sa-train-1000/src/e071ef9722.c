#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 63;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[18];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 66;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 92; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER