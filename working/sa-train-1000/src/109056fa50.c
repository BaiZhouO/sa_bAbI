#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 27;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 70;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_2[6];                        // Tag.BODY
    char entity_1[50];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_8 = 16;                           // Tag.BODY
    entity_2[entity_6] = 'h';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[39];                       // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = 'A';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_5[entity_4] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER