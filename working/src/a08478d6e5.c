#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_4[93];                       // Tag.BODY
    entity_3 = 29;                           // Tag.BODY
    entity_6 = 97;                           // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    entity_3 = 22;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 46;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'F';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    char entity_1[94];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[8];                        // Tag.BODY
    int entity_2;                            // Tag.BODY
    char *entity_9 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 74;                           // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    entity_5[entity_2] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_0] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER