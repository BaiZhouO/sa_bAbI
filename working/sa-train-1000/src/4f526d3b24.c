#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 38;                           // Tag.BODY
    char entity_1[59];                       // Tag.BODY
    entity_7 = 77;                           // Tag.BODY
    if(entity_4 < entity_7){                 // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 49;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER