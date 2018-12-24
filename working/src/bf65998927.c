#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[47];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_2 = 69;                           // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    if(entity_7 < entity_2){                 // Tag.BODY
    entity_7 = 22;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'v';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER