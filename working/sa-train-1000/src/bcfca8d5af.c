#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_1[15];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_2[92];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = 27;                           // Tag.BODY
    entity_9 = 1;                            // Tag.BODY
    entity_8 = 51;                           // Tag.BODY
    if(entity_4 < entity_9){                 // Tag.BODY
    entity_4 = 15;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'i';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    entity_1[entity_8] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[46];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 30;                           // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_0] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER