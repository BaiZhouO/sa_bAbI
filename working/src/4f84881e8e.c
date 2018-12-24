#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 25;                           // Tag.BODY
    entity_4 = 24;                           // Tag.BODY
    char entity_6[68];                       // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    entity_7 = 47;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 10;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER