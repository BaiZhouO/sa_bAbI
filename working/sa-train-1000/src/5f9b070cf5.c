#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_7[85];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_8 = 57;                           // Tag.BODY
    entity_2 = 44;                           // Tag.BODY
    if(entity_8 < entity_2){                 // Tag.BODY
    entity_8 = 29;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 56;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_8] = 'H';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER