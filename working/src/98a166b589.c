#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[14];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_7 = 95;                           // Tag.BODY
    entity_8 = 59;                           // Tag.BODY
    if(entity_8 < entity_7){                 // Tag.BODY
    entity_8 = 66;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 85;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_8] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[43];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[51];                       // Tag.BODY
    entity_4 = 88;                           // Tag.BODY
    entity_1 = 77;                           // Tag.BODY
    entity_3[entity_4] = '5';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 's';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER