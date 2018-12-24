#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_5[70];                       // Tag.BODY
    entity_6 = 96;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[80];                       // Tag.BODY
    entity_9 = 74;                           // Tag.BODY
    entity_7[entity_9] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER