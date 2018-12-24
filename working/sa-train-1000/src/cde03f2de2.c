#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[80];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_5[40];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 77;                           // Tag.BODY
    entity_9 = 37;                           // Tag.BODY
    entity_7 = 61;                           // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    entity_9 = 27;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    entity_4[entity_7] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_5[entity_9] = '8';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER