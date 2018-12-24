#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[28];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_6[66];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_2 = 27;                           // Tag.BODY
    entity_8 = 90;                           // Tag.BODY
    if(entity_4 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7[entity_2] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 16;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char *entity_1 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[72];                       // Tag.BODY
    entity_5 = 69;                           // Tag.BODY
    entity_0[entity_5] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER