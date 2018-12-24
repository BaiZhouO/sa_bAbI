#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = 35;                           // Tag.BODY
    char entity_3[34];                       // Tag.BODY
    entity_7 = 12;                           // Tag.BODY
    if(entity_7 < entity_0){                 // Tag.BODY
    entity_7 = 79;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 59;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'N';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_5 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[7];                        // Tag.BODY
    entity_9 = 44;                           // Tag.BODY
    entity_2[entity_9] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER