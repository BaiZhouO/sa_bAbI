#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 15;                           // Tag.BODY
    entity_7 = 85;                           // Tag.BODY
    char entity_3[53];                       // Tag.BODY
    if(entity_4 < entity_7){                 // Tag.BODY
    entity_4 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 56;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_4] = 'G';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER