#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[94];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_6 = 12;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_0[entity_6] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 57;                           // Tag.BODY
    char entity_1[18];                       // Tag.BODY
    if(entity_9 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER