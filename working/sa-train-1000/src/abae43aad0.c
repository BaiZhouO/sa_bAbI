#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[91];                       // Tag.BODY
    char entity_0[80];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 13;                           // Tag.BODY
    entity_9 = 55;                           // Tag.BODY
    entity_8 = 66;                           // Tag.BODY
    if(entity_2 < entity_9){                 // Tag.BODY
    entity_2 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 77;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'a';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char entity_6[36];                       // Tag.BODY
    entity_0[entity_8] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    entity_1 = 97;                           // Tag.BODY
    entity_6[entity_1] = 'w';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER