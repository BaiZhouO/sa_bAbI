#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[91];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 86;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if(entity_6 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 53;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_6] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER