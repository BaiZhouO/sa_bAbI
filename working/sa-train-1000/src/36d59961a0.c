#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 96;                           // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    char entity_8[30];                       // Tag.BODY
    if(entity_0 < entity_5){                 // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_0] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER