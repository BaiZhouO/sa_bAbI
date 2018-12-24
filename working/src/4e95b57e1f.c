#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_3 = 16;                           // Tag.BODY
    char entity_4[17];                       // Tag.BODY
    entity_9 = 93;                           // Tag.BODY
    if(entity_9 < entity_3){                 // Tag.BODY
    entity_9 = 26;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'Y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER