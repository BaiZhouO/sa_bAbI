#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_7[41];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 62;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[87];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_5 = 94;                           // Tag.BODY
    if(entity_3 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 18;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_3] = 'B';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER