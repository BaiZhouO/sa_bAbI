#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[56];                       // Tag.BODY
    entity_2 = 95;                           // Tag.BODY
    entity_1 = 25;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_3[7];                        // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 26;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3[entity_2] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER