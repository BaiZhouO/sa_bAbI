#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_1 = 17;                           // Tag.BODY
    char entity_5[74];                       // Tag.BODY
    entity_6 = 6;                            // Tag.BODY
    if(entity_1 < entity_6){                 // Tag.BODY
    entity_1 = 81;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'L';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 62;                           // Tag.BODY
    char *entity_2 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[38];                       // Tag.BODY
    entity_0[entity_9] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER