#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_7[7];                        // Tag.BODY
    char entity_5[27];                       // Tag.BODY
    char entity_8[67];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_4 = 5;                            // Tag.BODY
    entity_0 = 35;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 88;                           // Tag.BODY
    entity_3 = 66;                           // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    entity_0 = 79;                           // Tag.BODY
    entity_8[entity_1] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_0 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'b';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_0;                    // Tag.POINTER_DEC
    entity_5[entity_3] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER