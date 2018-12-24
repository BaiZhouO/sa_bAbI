#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 88;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_9[90];                       // Tag.BODY
    char entity_1[5];                        // Tag.BODY
    entity_4 = 35;                           // Tag.BODY
    if(entity_5 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 17;                           // Tag.BODY
    entity_9[entity_4] = '7';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_1[entity_5] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER