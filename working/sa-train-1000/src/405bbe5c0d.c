#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[63];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_1 = 88;                           // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 88;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER