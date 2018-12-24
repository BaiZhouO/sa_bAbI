#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_8[18];                       // Tag.BODY
    entity_4 = 88;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 85;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_0] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER