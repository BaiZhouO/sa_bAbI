#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_3[7];                        // Tag.BODY
    char entity_6[7];                        // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = 53;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_3[entity_9] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 18;                           // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'K';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                            // Tag.BODY
    entity_0 = 16;                           // Tag.BODY
    char entity_2[88];                       // Tag.BODY
    entity_2[entity_0] = 'E';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER