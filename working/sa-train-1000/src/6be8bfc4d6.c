#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_4[34];                       // Tag.BODY
    entity_8 = 70;                           // Tag.BODY
    entity_9 = 36;                           // Tag.BODY
    if(entity_8 < entity_9){                 // Tag.BODY
    entity_8 = 46;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER