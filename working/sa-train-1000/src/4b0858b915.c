#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[8];                        // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 73;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_9] = 'u';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER