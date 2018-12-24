#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_3[85];                       // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    entity_9 = 20;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_9] = 'R';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER