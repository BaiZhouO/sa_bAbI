#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_7[45];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[24];                       // Tag.BODY
    entity_2 = 90;                           // Tag.BODY
    entity_0 = 31;                           // Tag.BODY
    entity_1 = 18;                           // Tag.BODY
    if(entity_0 < entity_2){                 // Tag.BODY
    entity_0 = 86;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_0] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_1] = 'O';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER