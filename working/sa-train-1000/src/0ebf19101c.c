#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_8 = 41;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    char entity_5[36];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    char entity_6[68];                       // Tag.BODY
    if(entity_2 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_2] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_8] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    char entity_9[30];                       // Tag.BODY
    entity_1 = 15;                           // Tag.BODY
    entity_9[entity_1] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER