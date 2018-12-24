#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[10];                       // Tag.BODY
    entity_1 = 30;                           // Tag.BODY
    if(entity_1 < entity_3){                 // Tag.BODY
    entity_1 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER