#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_0[23];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    entity_7 = 65;                           // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'e';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER