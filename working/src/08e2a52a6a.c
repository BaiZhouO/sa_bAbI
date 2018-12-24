#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_9[45];                       // Tag.BODY
    entity_0 = 2;                            // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    entity_0 = 73;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 69;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_0] = 'K';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER