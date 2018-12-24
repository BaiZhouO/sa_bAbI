#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[84];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_1 = 66;                           // Tag.BODY
    if(entity_8 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 51;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_8] = 's';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char entity_3[17];                       // Tag.BODY
    char *entity_9 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 23;                           // Tag.BODY
    entity_3[entity_6] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER