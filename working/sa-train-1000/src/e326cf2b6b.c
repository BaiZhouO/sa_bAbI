#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_6[13];                       // Tag.BODY
    entity_8 = 15;                           // Tag.BODY
    if(entity_9 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 82;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER