#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_4 = 6;                            // Tag.BODY
    char entity_3[15];                       // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 49;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'h';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[74];                       // Tag.BODY
    char entity_1[30];                       // Tag.BODY
    entity_2 = 8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_1[entity_2] = 'x';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 21;                           // Tag.BODY
    entity_6[entity_9] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER