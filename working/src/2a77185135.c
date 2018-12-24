#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 88;                           // Tag.BODY
    char entity_5[15];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if(entity_6 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_6] = 'b';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER