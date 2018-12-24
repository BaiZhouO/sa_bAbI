#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[51];                       // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    entity_1 = 62;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_8[41];                       // Tag.BODY
    if(entity_4 < entity_7){                 // Tag.BODY
    entity_8[entity_1] = '4';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_4 = 60;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER