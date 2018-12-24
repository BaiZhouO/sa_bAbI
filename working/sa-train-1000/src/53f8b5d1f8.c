#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[83];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_3[16];                       // Tag.BODY
    entity_6 = 59;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_9 = 25;                           // Tag.BODY
    entity_3[entity_6] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_7 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'h';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[43];                       // Tag.BODY
    entity_5 = 58;                           // Tag.BODY
    entity_4[entity_5] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER