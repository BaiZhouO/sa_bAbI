#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[91];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_6 = 24;                           // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER