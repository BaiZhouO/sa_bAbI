#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 27;                           // Tag.BODY
    char entity_1[27];                       // Tag.BODY
    if(entity_0 < entity_9){                 // Tag.BODY
    entity_0 = 42;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 46;                           // Tag.BODY
    char entity_3[78];                       // Tag.BODY
    char *entity_8 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[5];                        // Tag.BODY
    entity_6[entity_4] = '5';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 96;                           // Tag.BODY
    entity_3[entity_7] = 'Y';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER