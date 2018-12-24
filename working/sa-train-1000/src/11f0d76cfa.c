#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[29];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_2[83];                       // Tag.BODY
    entity_1 = 76;                           // Tag.BODY
    char entity_9[35];                       // Tag.BODY
    entity_5 = 99;                           // Tag.BODY
    entity_3 = 36;                           // Tag.BODY
    entity_4[entity_1] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;                            // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    if(entity_3 < entity_5){                 // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2[entity_7] = 'r';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 40;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = '0';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER