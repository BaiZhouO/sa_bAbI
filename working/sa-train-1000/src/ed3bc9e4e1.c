#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_2 = 83;                           // Tag.BODY
    char entity_1[52];                       // Tag.BODY
    entity_6 = 96;                           // Tag.BODY
    if(entity_6 < entity_2){                 // Tag.BODY
    entity_6 = 10;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER