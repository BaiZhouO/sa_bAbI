#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 73;                           // Tag.BODY
    char entity_3[66];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 16;                           // Tag.BODY
    if(entity_4 < entity_2){                 // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 74;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_4] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 5;                            // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 54;                           // Tag.BODY
    char entity_7[23];                       // Tag.BODY
    char entity_8[35];                       // Tag.BODY
    entity_7[entity_9] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_1] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER