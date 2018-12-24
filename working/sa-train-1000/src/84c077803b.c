#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[15];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 93;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_9 = 62;                           // Tag.BODY
    char entity_6[87];                       // Tag.BODY
    entity_0 = 84;                           // Tag.BODY
    if(entity_9 < entity_5){                 // Tag.BODY
    entity_9 = 70;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_9] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_6[entity_0] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER