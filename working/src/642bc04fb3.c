#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_8[60];                       // Tag.BODY
    entity_4 = 53;                           // Tag.BODY
    entity_1 = 73;                           // Tag.BODY
    if(entity_1 < entity_4){                 // Tag.BODY
    entity_1 = 82;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[33];                       // Tag.BODY
    entity_6 = 94;                           // Tag.BODY
    entity_0[entity_6] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER