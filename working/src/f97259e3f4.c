#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_1[73];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_6 = 60;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'o';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER