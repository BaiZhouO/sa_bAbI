#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_5[4];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 16;                           // Tag.BODY
    entity_2 = 68;                           // Tag.BODY
    if(entity_2 < entity_4){                 // Tag.BODY
    entity_2 = 34;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_2;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char *entity_6 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[90];                       // Tag.BODY
    entity_7 = 54;                           // Tag.BODY
    entity_8[entity_7] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER