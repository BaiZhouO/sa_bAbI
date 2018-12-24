#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_4[91];                       // Tag.BODY
    entity_3 = 21;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 14;                           // Tag.BODY
    if(entity_0 < entity_3){                 // Tag.BODY
    entity_0 = 41;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 47;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'p';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char entity_5[42];                       // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 97;                           // Tag.BODY
    entity_5[entity_9] = 'p';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER