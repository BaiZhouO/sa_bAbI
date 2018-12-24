#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_0[8];                        // Tag.BODY
    entity_7 = 48;                           // Tag.BODY
    entity_1 = 95;                           // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    entity_1 = 64;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'L';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                            // Tag.BODY
    entity_9 = 90;                           // Tag.BODY
    char entity_6[1];                        // Tag.BODY
    entity_6[entity_9] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER