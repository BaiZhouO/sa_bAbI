#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[79];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_1 = 1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[81];                       // Tag.BODY
    char entity_3[4];                        // Tag.BODY
    entity_0 = 57;                           // Tag.BODY
    entity_9 = 45;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_2[entity_9] = 'B';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_5 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_0] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER