#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_8[27];                       // Tag.BODY
    entity_7 = 69;                           // Tag.BODY
    entity_0 = 54;                           // Tag.BODY
    if(entity_0 < entity_7){                 // Tag.BODY
    entity_0 = 21;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_0] = 'W';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER