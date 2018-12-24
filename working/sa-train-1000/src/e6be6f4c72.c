#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_5[50];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 89;                           // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    if(entity_1 < entity_0){                 // Tag.BODY
    entity_1 = 47;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 30;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER