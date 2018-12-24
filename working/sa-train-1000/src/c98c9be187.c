#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 82;                           // Tag.BODY
    char entity_4[76];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if(entity_2 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 4;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_2;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 89;                           // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[13];                       // Tag.BODY
    entity_5[entity_3] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER