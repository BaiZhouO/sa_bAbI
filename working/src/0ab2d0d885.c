#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[16];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_1[73];                       // Tag.BODY
    entity_4 = 1;                            // Tag.BODY
    entity_2 = 41;                           // Tag.BODY
    entity_3[entity_2] = 'q';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_9 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = '8';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    entity_8 = 53;                           // Tag.BODY
    char entity_6[21];                       // Tag.BODY
    entity_6[entity_8] = 'q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER