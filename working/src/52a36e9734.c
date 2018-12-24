#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[65];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[60];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_2 = 67;                           // Tag.BODY
    entity_7 = 93;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    if(entity_1 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'o';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_4 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[48];                       // Tag.BODY
    entity_3 = 59;                           // Tag.BODY
    entity_8[entity_3] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_7] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER