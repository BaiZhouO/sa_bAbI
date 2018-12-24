#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_8[11];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_4 = 60;                           // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'h';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_3 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[22];                       // Tag.BODY
    entity_0 = 31;                           // Tag.BODY
    entity_6[entity_0] = 'Z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER