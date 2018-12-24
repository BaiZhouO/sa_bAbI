#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_2[53];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_3[55];                       // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_4 = 46;                           // Tag.BODY
    entity_9 = 78;                           // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 67;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char entity_5[89];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_8 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 80;                           // Tag.BODY
    entity_2[entity_9] = 'W';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_6] = 'd';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER