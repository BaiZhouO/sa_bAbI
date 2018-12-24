#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_4[13];                       // Tag.BODY
    entity_1 = 74;                           // Tag.BODY
    entity_7 = 77;                           // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    entity_1 = 95;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_1] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER