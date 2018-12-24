#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[85];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_4 = 92;                           // Tag.BODY
    entity_9 = 67;                           // Tag.BODY
    char entity_5[71];                       // Tag.BODY
    if(entity_7 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_1[entity_4] = 'J';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_5[entity_7] = 'D';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER