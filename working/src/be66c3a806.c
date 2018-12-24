#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 65;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = 66;                           // Tag.BODY
    char entity_1[36];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 28;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_1[entity_4] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[25];                       // Tag.BODY
    char entity_7[47];                       // Tag.BODY
    entity_2[entity_0] = 'V';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_6 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 49;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_6] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER