#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[18];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 60;                           // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    char entity_9[76];                       // Tag.BODY
    entity_4 = 37;                           // Tag.BODY
    if(entity_4 < entity_2){                 // Tag.BODY
    entity_3[entity_8] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 77;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'C';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[33];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 57;                           // Tag.BODY
    entity_0[entity_6] = 'v';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER