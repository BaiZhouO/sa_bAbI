#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_6[26];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 39;                           // Tag.BODY
    entity_1 = 43;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    char entity_2[83];                       // Tag.BODY
    if(entity_0 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'u';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    entity_2[entity_9] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER