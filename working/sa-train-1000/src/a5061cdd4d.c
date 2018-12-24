#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 98;                           // Tag.BODY
    char entity_0[85];                       // Tag.BODY
    if(entity_7 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER