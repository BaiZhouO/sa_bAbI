#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_4[39];                       // Tag.BODY
    entity_9 = 4;                            // Tag.BODY
    entity_2 = 83;                           // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    entity_9 = 78;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 56;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER