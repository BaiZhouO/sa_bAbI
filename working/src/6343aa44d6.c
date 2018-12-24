#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_9[67];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    char entity_2[37];                       // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_8 = 27;                           // Tag.BODY
    if(entity_5 < entity_8){                 // Tag.BODY
    entity_9[entity_0] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_5 = 94;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_5] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER