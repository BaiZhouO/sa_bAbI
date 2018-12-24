#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[66];                       // Tag.BODY
    entity_7 = 36;                           // Tag.BODY
    entity_1 = 45;                           // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    entity_1 = 87;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                            // Tag.BODY
    entity_9 = 60;                           // Tag.BODY
    char entity_0[52];                       // Tag.BODY
    entity_0[entity_9] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER