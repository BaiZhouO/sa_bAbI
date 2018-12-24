#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_6[93];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 18;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_5] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 18;                           // Tag.BODY
    char *entity_1 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[59];                       // Tag.BODY
    entity_3[entity_9] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER