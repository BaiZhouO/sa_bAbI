#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    entity_0 = 63;                           // Tag.BODY
    char entity_1[15];                       // Tag.BODY
    if(entity_4 < entity_0){                 // Tag.BODY
    entity_4 = 25;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 65;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[17];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 83;                           // Tag.BODY
    entity_3[entity_8] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER