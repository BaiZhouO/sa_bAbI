#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 29;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_2[4];                        // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[81];                       // Tag.BODY
    entity_5 = 86;                           // Tag.BODY
    entity_6[entity_5] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER