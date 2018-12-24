#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_2[95];                       // Tag.BODY
    entity_9 = 73;                           // Tag.BODY
    entity_2[entity_9] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_0;                            // Tag.BODY
    entity_0 = 41;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_7[14];                       // Tag.BODY
    char entity_5[29];                       // Tag.BODY
    entity_5[entity_0] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 67;                           // Tag.BODY
    entity_4 = 19;                           // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    entity_4 = 47;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER