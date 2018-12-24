#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_9[71];                       // Tag.BODY
    entity_6 = 35;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 85;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_0] = 'N';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER