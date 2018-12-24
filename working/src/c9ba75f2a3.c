#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 20;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_3[25];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 45;                           // Tag.BODY
    char entity_0[83];                       // Tag.BODY
    entity_4 = 21;                           // Tag.BODY
    if(entity_8 < entity_9){                 // Tag.BODY
    entity_8 = 2;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 95;                           // Tag.BODY
    entity_0[entity_4] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_3[entity_8] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER