#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[17];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 89;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER