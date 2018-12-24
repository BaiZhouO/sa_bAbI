#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_9[55];                       // Tag.BODY
    char entity_3[21];                       // Tag.BODY
    entity_8 = 73;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_7 = 45;                           // Tag.BODY
    if(entity_2 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9[entity_7] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    char entity_1[51];                       // Tag.BODY
    entity_6 = 35;                           // Tag.BODY
    entity_1[entity_6] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER