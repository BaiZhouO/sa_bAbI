#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_9[41];                       // Tag.BODY
    entity_5 = 92;                           // Tag.BODY
    entity_1 = 31;                           // Tag.BODY
    char entity_3[17];                       // Tag.BODY
    if(entity_4 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_6[56];                       // Tag.BODY
    entity_7 = 4;                            // Tag.BODY
    entity_6[entity_7] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_0 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3[entity_1] = 's';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER