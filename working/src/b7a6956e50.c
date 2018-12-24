#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_6[49];                       // Tag.BODY
    entity_1 = 40;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 54;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER