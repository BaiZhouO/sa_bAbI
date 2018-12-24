#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    entity_0 = 42;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_9[1];                        // Tag.BODY
    entity_6 = 3;                            // Tag.BODY
    if(entity_6 < entity_0){                 // Tag.BODY
    entity_6 = 75;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_6] = 'u';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER