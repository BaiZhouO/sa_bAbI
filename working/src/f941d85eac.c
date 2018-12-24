#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_6[30];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 85;                           // Tag.BODY
    entity_3 = 67;                           // Tag.BODY
    if(entity_3 < entity_8){                 // Tag.BODY
    entity_3 = 54;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER