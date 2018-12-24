#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_2[75];                       // Tag.BODY
    entity_8 = 26;                           // Tag.BODY
    if(entity_9 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 63;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_9] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER