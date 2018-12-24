#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[33];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    char entity_3[75];                       // Tag.BODY
    entity_3[entity_1] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 66;                           // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'b';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 35;                           // Tag.BODY
    char entity_0[78];                       // Tag.BODY
    entity_0[entity_9] = 'B';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER