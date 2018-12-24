#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_1 = 93;                                       // Tag.BODY
    char entity_8[23];                                   // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 72;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 25; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER