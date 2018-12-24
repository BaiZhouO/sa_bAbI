#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_9[18];                       // Tag.BODY
    char entity_0[13];                       // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 47;                           // Tag.BODY
    entity_4 = 70;                           // Tag.BODY
    if(entity_1 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_0[entity_4] = 'X';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_2 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[55];                       // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    entity_6[entity_3] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER